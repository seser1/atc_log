N,M,R=gets.split.map(&:to_i)
r=gets.split.map(&:to_i).map!{|x|x-1}
$node=Array.new(N){Array.new(N,100_001)}
N.times{|i|$node[i][i]=0}
$ans=1000_000_000
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
N.times{|i|
  N.times{|j|
    N.times{|k|
      $node[i][j]=[$node[i][j],$node[i][k]+$node[k][j]].min
    }
  }
}
dfs(r,-1,0)
puts $ans
