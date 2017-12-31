n,a,b = gets.chomp.split(" ").map(&:to_i)

def sum(num)
  s=num%10
  s+=sum(num/10) if num/10>0
  return s
end

ret=0
n.times{|i|
  tmp=sum(i+1)
  ret+=(i+1) if tmp>=a && tmp<=b
}
puts ret
