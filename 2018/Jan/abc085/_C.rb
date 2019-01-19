N,Y=gets.split.map(&:to_i)
x,y,z=-1,-1,-1
(N+1).times{|i|(N+1-i).times{|j|x,y,z=i,j,N-i-j if i*10000+j*5000+(N-i-j)*1000 == Y}}
puts "#{x} #{y} #{z}"