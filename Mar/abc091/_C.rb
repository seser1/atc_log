n=gets.chomp.to_i
r,b=[],[]
n.times{|i|r[i]=gets.split.map(&:to_i)}
n.times{|i|b[i]=gets.split.map(&:to_i)}
r.sort_by!{|x|x[0]}
b.sort_by!{|x|x[0]}
b.each{|bb|
  c= r.select{|rr|rr[0]<bb[0]}.sort_by{|r|r[1]}.reverse
  c.each{|cc|
    if cc[1]<bb[1] then
      r.delete(cc)
      break
    end
  }
}
puts n-r.size
