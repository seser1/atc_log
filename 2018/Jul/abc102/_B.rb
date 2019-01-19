gets
p proc{|a|a.max-a.min}.call(gets.split.map(&:to_i))
