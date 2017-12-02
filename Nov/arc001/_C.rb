q = ['.', 'Q']
$c = Array.new
$f = false
8.times do |i|
  $c += gets.chomp.split("")
end

def dec(i, j, c)
  8.times do |k|
    return false if (c[i*8 + k] == 'Q' && k!=j) || (c[k*8 +j] =='Q' && k!=i)
  end
  (-8..8).each do |k|
    return false if i+k>=0 && i+k<8 && j+k>=0 && j+k<8 && c[(i+k)*8 + j + k] == 'Q' && k!=0
    return false if i-k>=0 && i-k<8 && j+k>=0 && j+k<8 && c[(i-k)*8 + j + k] == 'Q' && k!=0
  end
  return true
end

def put(i, j, n, c)
  if n == 8 then
    $c = c
    $f = true
    return 
  end
  return if i > 7 || j > 7
  

  if j >= 7
    put(i+1, 0, n, c.clone)
  else
    put(i, j+1, n, c.clone)
  end

  if c[i*8+j] == '.' && dec(i, j, c)
    c[i*8+j] = 'Q'
    if j >= 7
      put(i+1, 0, n+1, c.clone)
    else
      put(i, j+1, n+1, c.clone)
    end
  end

  return
end

8.times do |i|
  8.times do |j|
    if $c[i*8+j] == 'Q' then
      if !dec(i, j, $c) then 
        puts 'No Answer'
        exit
      end
    end
  end
end

put(0, 0, 3, $c.clone)

if $f then
  8.times do |i|
    8.times do |j|
      print $c[i*8+j]
    end
    print "\n"
  end
else
  puts 'No Answer'
end
