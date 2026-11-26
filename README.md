# C-prace-domowa

Structured programming homework in C: exercises in 3 chapters, including pointers.

University coursework from my Computer Science studies at UWM (2020–2024). I wrote the code by hand; the commit history is unchanged. This README was added in November 2026.

Years of work: 2021 (first commit on 4 March 2021, last commit on 13 June 2021).

## Contents

- `rozdzial-1/`, `rozdzial-2/`, `rozdzial-3/`: exercises of chapters 1–3 (23, 7 and 6 `.c` files); `rozdzial-3/wskazniki/` holds Visual Studio files of the pointers project.
- `zadanie_*.c`, `zad*.c`, `calosc_wskazniki.c` in the root: 29 more homework files.
- `stare/`: older homework sets 1–4.
- `.sln`, `.vcxproj` and build logs: Visual Studio files.

I wrote the code in Visual Studio. With gcc 16 on Linux, 29 of the 81 `.c` files compile as they are, 37 use `scanf_s` from Microsoft's C library, which glibc does not have, 7 compile with `-std=gnu89`, and 8 have other errors.

## Running

```
gcc -o /tmp/zadanie_6-1 zadanie_6-1.c && /tmp/zadanie_6-1
```

Result on 26 November 2026: the program prints `0a1a2a…25a`.

## Original note

# C-prace-domowa
Maciej Szulia prace domowe z programowania strukturalnego

## Po polsku

Repozytorium zawiera prace domowe z programowania strukturalnego w C, w tym ćwiczenia ze wskaźnikami. Kod napisałem ręcznie na studiach informatycznych na UWM w 2021 roku.
