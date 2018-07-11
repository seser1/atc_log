n,t=gets.to_i,[]
a=gets.split.map(&:to_i)
n.times{|i|
  t.push(a[i]-(i+1))
}
an=0
t.sort!
tt= n%2==1 ? t[(n/2.0).floor] : ((t[n/2]+t[n/2-1])/2).round
n.times{|i|
  an+=(a[i]-(tt+i+1)).abs
}
p an
