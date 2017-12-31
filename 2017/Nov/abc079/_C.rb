$n=gets.chomp.split("").map!{|x| x.to_i}
$ans=nil

def df(num, i, s)
  $ans=s if num==7
  return if i>=4
  df(num+$n[i], i+1, s+"+"+$n[i].to_s)
  df(num-$n[i], i+1, s+"-"+$n[i].to_s)
end

df($n[0],1,$n[0].to_s)
puts "#{$ans}=7"