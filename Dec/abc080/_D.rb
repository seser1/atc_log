n,c=gets.chomp.split("").map!{|x| x.to_i}

st=tt=ans=tmp=0
s=[], t=[], j=[]

n.times do |i|
  si,ti,c=gets.chomp.split("").map!{|x| x.to_i}
  s[i]=[si, c]
  t[i]=[ti, c]
end


s.each do |i|
  if i[1] == t[i[0]] then
	t.delete_at(i[0])
	s.delete(i)
  end
  i[0]-=1 if i
end

#s=s.map { |n| n-1 }
j=s+t

s=s.sort
t=t.sort
j=j.sort

j.each do |i|
  while s[st] && s[st][0] == i[0] do
	tmp+=1
	st+=1
  end
  while t[tt] && t[tt][0] == i[0] do
	tmp-=1
	tt+=1
  end  
  ans = [ans, tmp].max
end

puts ans
