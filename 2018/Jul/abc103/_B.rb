s=gets.chomp
t=gets.chomp
ans=false
s.size.times{|i|
  ans=true if s==t
  s=s[s.size-1]+s[0,s.size-1]
}
puts ans ? 'Yes' : 'No'
