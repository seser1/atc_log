N,M,R=gets.split.map(&:to_i)
r=gets.split.map(&:to_i).map!{|x|x-1}
$ans=MAX=1e12
$node=Array.new(N){Array.new(N,MAX)}
N.times{|i|$node[i][i]=0}
def dfs(re,n,sum)
  if re.size==0 then
    $ans=[$ans,sum].min
    return
  end
  re.each{|e|
    d=Marshal.load(Marshal.dump(re))
    d.delete(e)
    if n==-1 then
      dfs(d,e,sum)
    else
      dfs(d,e,sum+$node[n][e])
    end
  }
end
M.times{
  a,b,c=gets.split.map(&:to_i)
  $node[a-1][b-1]=$node[b-1][a-1]=c
}
N.times{|k|
  N.times{|i|
    N.times{|j|
      t=$node[i][k]+$node[k][j]
      $node[i][j]=t if $node[i][j]>t
    }
  }
}
dfs(r,-1,0)
puts $ans
