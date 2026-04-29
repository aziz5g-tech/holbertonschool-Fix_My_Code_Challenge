#!/usr/bin/ruby

def sort_array(args)
  args.map do |str|
    if str.to_i.to_s == str || str.to_i.to_s == str.to_s
      str.to_i
    else
      str
    end
  end.sort do |a, b|
    if a.is_a?(Integer) && b.is_a?(Integer)
      b <=> a
    elsif a.is_a?(Integer)
      -1
    elsif b.is_a?(Integer)
      1
    else
      a <=> b
    end
  end
end

result = sort_array(ARGV)
result.each { |element| puts element }
