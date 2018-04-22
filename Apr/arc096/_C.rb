a,b,c,x,y=gets.split.map(&:to_i)
ans=1e10
([x,y].max+1).times{|i|
  t=i*2*c
  t+=(x-i)*a if i<x
  t+=(y-i)*b if i<y
  ans=[t,ans].min
}
puts ans
