a,b,n=gets.split.map(&:to_i)
gets.split('').each{|c|
  case c
  when 'S' then
    a-=1 if 0<a
  when 'C' then
    b-=1 if 0<b
  when 'E' then
    if a!=0 || b!=0
      if b>a then
        b-=1
      else
        a-=1
      end
    end
  end
}
puts a
puts b
