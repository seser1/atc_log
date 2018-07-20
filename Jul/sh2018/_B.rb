s=gets.chars
w=gets.to_i
ans=""
s.each_with_index{|c,i|ans+=c if i%w==0}
puts ans
