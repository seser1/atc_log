N=gets.to_i
a=gets.split.map(&:to_i)
aa=[]
N.times{|i|
  if i==0 then
    aa[i]=a[i]
  else
    aa[i]=aa[i-1]+a[i]
  end
}
aa.push(0)
aa.sort!
t=-1e10
nt,ans=0,0
(N+1).times{|i|
  if t!=aa[i] then
    ans+=nt*(nt-1)/2
    nt=0
    t=aa[i]
  end
  nt+=1
}
ans+=nt*(nt-1)/2

puts ans
