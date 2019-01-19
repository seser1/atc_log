n=gets.chomp.to_i
h={'M'=>0, 'A'=>1, 'R'=>2, 'C'=>3, 'H'=>4}
l=Array.new(5, 0)
ans=0
n.times{
  s=gets.chomp
  next if !h.key?(s[0])
  l[h[s[0]]]+=1
}
5.times{|i|
  for j in i+1..4 do
    for k in j+1..4 do
    ans+=l[i]*l[j]*l[k]
    end
  end
}
puts ans
