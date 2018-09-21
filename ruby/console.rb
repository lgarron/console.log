class Console
  def self.log(*args)
    old_ofs = $,
    # TODO: Use a dynamic scope mechanism instead?
    $, = " "
    begin
      print(*args)
      puts()
    ensure
      $, = old_ofs
    end
  end
end

def console
  Console
end
