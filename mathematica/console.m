(* ::Package:: *)

Unprotect[Times];
(* Only works for a single argument. :-( *)
console.log(arg_) := Print[arg];
Protect[Times];

Unprotect[Dot];
console.log[args___] := Print[args];
Protect[Dot];
