H,W,D=gets.split.map(&:to_i)
h,d,ans={},Array.new(H*W+1,0),[]
H.times{|i|
  a=gets.split.map(&:to_i)
  W.times{|j|
    h[a[j]]=[i,j]
  }
}
((1+D)..(H*W)).each{|i|
  d[i]=d[i-D]+(h[i][0]-h[i-D][0]).abs+(h[i][1]-h[i-D][1]).abs
}
Q=gets.chomp.to_i
Q.times{|i|
  l,r=gets.split.map(&:to_i)
  ans[i]=d[r]-d[l]
}
Q.times{|i|
  puts ans[i]
}
