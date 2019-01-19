s=gets.chomp
k=gets.chomp.to_i
ar=[]
s.size.times{|i|
  k.times{|j|
    ar.push(s[i..i+j]) if i+j<s.size
  }
}
puts ar.uniq.sort[k-1]