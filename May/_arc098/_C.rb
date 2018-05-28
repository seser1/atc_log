n=gets.to_i
s=gets.chomp.split('')
t=s.count('E')
ans=1e6.to_i
n.times{|i|
  t+=1 if 0<i&&s[i-1]=='W'
  t-=1 if s[i]=='E'
  ans=[ans,t].min
}
puts ans
