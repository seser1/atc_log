require 'set'
s=gets.chomp.to_i
set=Set[s]
1000001.times{
  s = s%2==0 ? s/2 :3*s+1
  break if set.include?(s)
  set.add(s)
}
p set.size+1