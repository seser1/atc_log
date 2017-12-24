x,y = gets.chomp.split(" ").map(&:to_i)
tmp=0
while true
  if (2**tmp)*x>y then
    puts tmp
    break
  end
  tmp+=1
end
