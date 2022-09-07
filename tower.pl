toh(1, From, To, Mid) :-
    write('Move disk 1 from ') , write(From), write(' to '), write(To), nl.

toh(N, From, To, Mid) :-
    N > 1,
    M is N-1,
    toh(M, From, Mid, To),
    write('Move disk '), write(N), write(' from ') , write(From), write(' to '), write(To), nl,
    toh(M, Mid, To, From).
