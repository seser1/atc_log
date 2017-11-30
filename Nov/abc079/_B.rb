n=gets.to_i

l=[2, 1]
(2..n).each do |i|
  l += [l[i-2] + l[i-1]]
end
puts l[n]