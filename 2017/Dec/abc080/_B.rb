s=gets.chomp
n=s.to_i
sum=0
s.split("").map(&:to_i).each do |i|
  sum+=i.to_i
end
puts (n%sum==0 ? 'Yes' : 'No')