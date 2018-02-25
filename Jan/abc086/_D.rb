N,K=gets.split.map(&:to_i)
m,p=0,[]
N.times{|i|
  x,y,c=gets.split
  x,y=[x,y].map(&:to_i)
  y-=K if c=='W'
  p[i]=[x,y]
}
K.times{|i|
  K.times{|j|
    t=0
    N.times{|n|
      x,y=(p[n][0]-i+2*K)%(2*K),(p[n][1]-j+2*K)%(2*K)
      t+=1 if x.div(K)==y.div(K)
    }
    m=[m,t].max
  }
}
puts m 