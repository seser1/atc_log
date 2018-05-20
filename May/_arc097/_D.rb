n,m=gets.split.map(&:to_i)
pt=gets.split.map(&:to_i)
gl=Array.new(n){Array.new(0)}
hs={}
m.times{|i|
  x,y=gets.split.map(&:to_i)
  x,y=x-1,y-1
  gl[x].push(y)
  gl[y].push(x)
}
gr=Array.new(n,0)
c=1
n.times{|i|
  if gr[i]==0 then
    qu=[]
    qu.push(i)
    while qu.size!=0
      po=qu.shift
      hs[pt[po]-1]=c
      gr[po]=c
      gl[po].each{|j|
        qu.push(j) if gr[j]==0
      }
    end
    c+=1
  end
}
ans=0
n.times{|i|
  ans+=1 if hs[i]==gr[i]
}
puts ans