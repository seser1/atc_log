puts proc{|s|s[0]=='A'&&s[2,s.size-3].include?('C')&&s.scan(/[a-z]/).size==(s.size-2)}.call(gets.chomp)?'AC':'WA'
