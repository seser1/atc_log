m,a,N=0,[],gets.chomp.to_i
2.times{|i|a[i]=gets.split(' ').map(&:to_i)}
N.times{|i|m=[m, (a[0].slice(0,i+1)+a[1].slice(i,N-i)).inject(:+)].max}
puts m