n=gets.chomp.split("").map!{|x| x.to_i}

t=-1, tmp=0
str='No'
n.each do |i|
  tmp = (t==i ? tmp+1 : 0)
  str='Yes' if tmp>=2
  t=i
end

puts str