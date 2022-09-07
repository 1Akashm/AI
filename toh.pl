move(1,x,y,_):-
write('Move top disk from'),
write(x),
write('to'),
write(y),
nl.
move(N,x,y,z):-
N>1,
M is N-1,
move(M,x,z,y),
move(1,x,y,_),
move(M,z,y,x).