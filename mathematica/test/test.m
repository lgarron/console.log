Import["../console.m"]

console.log("single argument")

(* We'd use associative arrays, but those seem to have trouble printing. *)
arr = {21, -22, {23, 24}, "owl", {"eagle" -> {25}}};
map = {"cat" -> {31, 32}, "dog" -> 33, 34 -> "fox"};
console.log["Mathematica:", 1337, arr, map];

