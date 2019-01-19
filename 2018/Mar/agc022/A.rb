S=gets.chomp
us=Array.new(26,0)
hsc,hsi={},{}
('a'..'z').each_with_index{|c,i|
  hsc[c]=i
  hsi[i]=c
}
S.size.times{|i|us[hsc[S[i]]]=1}
ans,f=nil,false
26.times{|i|
  if us[i]==0 then
    ans=S+hsi[i]
    f=true
    break
  end
}
if !f then
  bef=-1
  26.times{|i|
    if hsc[S[25-i]]<bef then
      t=hsc[S[25-i]]
      us=Array.new(26,0)
      S[0,25-i].size.times{|i|us[hsc[S[i]]]=1}
      while true do
        t+=1
        if t>25 then
          break if i>=25
          i+=1
          t=hsc[S[25-i]]
        else
          if us[t]!=1 then
            ans=S[0,25-i]+hsi[t]
            break
          end
        end
      end

      break
    end
    bef=hsc[S[25-i]]
  }
end
ans=-1 if ans==nil

puts ans
