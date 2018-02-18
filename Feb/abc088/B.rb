N=gets.chomp.to_i
a=gets.split(' ').map(&:to_i)
a.sort!
a.reverse!
al,bo=0,0
a.each_with_index{|aa,i|
  i%2==0 ? al+=aa : bo+=aa  
}
puts al-bo