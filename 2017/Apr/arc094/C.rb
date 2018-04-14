n=gets.split.map(&:to_i)
n.sort!
ans=0
a=n[2]-n[0]
b=n[2]-n[1]
ans+=a.div(2)
ans+=b.div(2)
a%=2
b%=2
if a==1 && b==1 then
  ans+=1
else
  ans+=2 if a==1
  ans+=2 if b==1
end
puts ans
