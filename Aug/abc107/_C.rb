n,k=gets.split.map(&:to_i)
x=gets.split.map(&:to_i)
ans=1e10.to_i
(n-k+1).times{|i|
  ans=[[(0-x[i]).abs+(x[k+i-1]-x[i]),
  (x[k+i-1]-0).abs+(x[k+i-1]-x[i])].min,ans].min
}
puts ans
