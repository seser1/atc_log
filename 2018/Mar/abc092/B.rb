N=gets.chomp.to_i
D,x=gets.split.map(&:to_i)
N.times{
  a=gets.chomp.to_i
  x+=(1+(D-1).div(a))
}
puts x
