n=gets.chomp.to_i
h=gets.split.map(&:to_i)
ans=0
100.times{|hh|
  t=0
  s=false
  n.times{|nn|
    if h[nn]>hh then
      if !s then
        t+=1
        s=true
      end
    else
      s=false        
    end
  }
  break if t==0
  ans+=t
}
puts ans