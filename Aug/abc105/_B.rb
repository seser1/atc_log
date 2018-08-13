puts ->n{(n/7+1).times{|i|return :Yes if(n-i*7)%4==0};:No}.(gets.to_i)
