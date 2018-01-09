N,h=gets.split(' ').map(&:to_i)
res,a,b=0,[],[]
N.times{|i|a[i],b[i]=gets.split(' ').map(&:to_i)}
a=a.sort{|i, j| j<=>i}
b=b.sort{|i, j| j<=>i}
while h>0
  if b[0]!=nil&&a[0]<b[0]
    h-=b.shift
    res+=1
  else
    res+=(h.to_f/a[0]).ceil
    h=-1
  end
end
puts res