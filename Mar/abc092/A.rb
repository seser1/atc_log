ans=0
2.times{
  t=1000
  2.times{t=[gets.to_i,t].min}
  ans+=t
}
puts ans
