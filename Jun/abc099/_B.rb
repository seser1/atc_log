a,b=gets.split.map(&:to_i)
x=0
(b-a).times{|i|x+=i+1}
p x-b
