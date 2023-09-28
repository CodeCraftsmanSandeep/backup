signature S = sig
    type color
    val look :  color
    val switch : ()
end

structure s :> S =
struct
datatype color = RED | GREEN | AMBER | NONE
val curr = RED
val prev = NONE
fun look = curr
fun switch =
    if (curr = RED) then
        prev = RED
        curr = AMBER
    else if (curr = GREEN) then
        prev = GREEN
        curr = AMBER
    else
        curr = prev
end
