c=[]
flag=true
3.times{|i|
  c[i]=gets.split(' ').map(&:to_i)
}
2.times{|j|
  bef=c[0][j+1]-c[0][j]
  2.times{|i|
    flag=false if c[i+1][j+1]-c[i+1][j] != bef
  }
}
2.times{|i|
  bef=c[i+1][0]-c[i][0]
  2.times{|j|
    flag=false if c[i+1][j+1]-c[i][j+1] != bef
  }
}
puts flag ? 'Yes' : 'No'