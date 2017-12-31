$n = gets.chomp.to_i
$f,$p,$ans = [],[],-1000000000
$n.times do |i|
  $f[i]=gets.chomp.split(" ").map(&:to_i)
end
$n.times do |i|
  $p[i]=gets.chomp.split(" ").map(&:to_i)
end

def dec(o)
  pr=0
  $n.times do |i|
    c,tmp = 0,o
    10.times do |j|
      c+=1 if tmp%10 ==1 && $f[i][j] == 1
      tmp /=10
    end
    pr+=$p[i][c]
  end
  $ans=[pr, $ans].max  
end

def df(i, o)
  if i==10 then
    dec(o) if o!=0
  else
  df(i+1, o*10)
  df(i+1, o*10+1)
  end
end

df(0, 0)
puts $ans