h={}
n=gets.chomp.to_i
n.times{
  s=gets.chomp
  h[s]=0 if h[s]==nil
  h[s]+=1
}
m=gets.chomp.to_i
m.times{
  s=gets.chomp
  h[s]=0 if h[s]==nil
  h[s]-=1
}
ma=0
h.each{|k,b|
  ma=[ma,b].max
}
puts ma
