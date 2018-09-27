include("../console.jl")

arr = [21, -22, [23, 24], "owl", Dict("eagle" => [25])];
map = Dict("cat" => [31, 32], "dog" => 33, 34 => "fox")
console.log("Julia:", 1337, arr, map)
