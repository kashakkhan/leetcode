class Solution(object):
    def evalRPN(self, tokens):
        stack=[]
        for i in tokens:
            if i =="+":
                a=stack.pop()
                b=stack.pop()
                c=int(a)+int(b)
                stack.append(c)

            elif i =="-":
                a=stack.pop()
                b=stack.pop()
                c=int(b)-int(a)
                stack.append(c)
            
            elif i =="/":
                a=stack.pop()
                b=stack.pop()
                c=int(float(b)/int(a))
                stack.append(c)

            elif i =="*":
                a=stack.pop()
                b=stack.pop()
                c=int(b)*int(a)
                stack.append(c)   

            else:
                stack.append(int(i))       

        return stack[-1]