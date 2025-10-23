# 🧩 C - Complemente de Programare 1 — Git Assignment

Acest repository conține **temele și exercițiile realizate în limbajul C** pentru cursul _Complemente de Programare (CP1)_, organizate pe 5 laboratoare.  
Scopul proiectelor este de a exersa programarea modulară, lucrul cu funcții, apeluri de sistem, procese, thread-uri și structuri avansate.

---

## 🧪 Laborator 1 — Funcții și metode numerice
- **P1:** Calculează **indicatorul Euler** pentru mai multe numere folosind funcții auxiliare pentru determinarea numerelor prime și calculul CMMDC.
- **P2:** Determină **valoarea unei integrale definite** prin metoda trapezelor, folosind **pointeri la funcții**.
- **P3:** Meniu interactiv care permite alegerea metodei de integrare (trapez, dreptunghi, Simpson).
- **P4:** Compară rezultatele pentru mai multe funcții matematice, aplicând diferite metode numerice de integrare.

🧠 **Concepte cheie:** funcții, pointeri la funcții, modularizare, algoritmi numerici.

---

## 💾 Laborator 2 — Apeluri de sistem și gestiunea fișierelor
- **P1:** Citirea și afișarea conținutului unui fișier folosind apeluri de sistem POSIX (`open`, `read`, `write`, `close`).
- **P2:** Concatenarea mai multor fișiere într-unul singur, gestionând erorile și permisiunile de acces.
- **P3:** Demonstrarea utilizării **variabilelor globale, statice și externe**, evidențiind comportamentul acestora în timpul execuției.

🧠 **Concepte cheie:** apeluri de sistem, lucrul cu fișiere binare/text, fluxuri de I/O la nivel jos.

---

## ⚙️ Laborator 3 — Procese și gestionarea execuției
- **P1:** Demonstrarea creării și gestionării proceselor folosind **POSIX `spawn`, `waitpid` și coduri de terminare**.  
  Programul ilustrează modul de lansare al programelor externe și interpretarea codurilor de ieșire ale acestora.

🧠 **Concepte cheie:** procese, PID, execuție concurentă, comunicare proces–părinte.

---

## 🧵 Laborator 4 — Threading și paralelizare
- **P1:** Calculează **produsul scalar al doi vectori** folosind fire de execuție POSIX (`pthread`).  
  Datele sunt citite dintr-un fișier text, iar fiecare thread procesează o parte din vectori pentru a accelera execuția.

🧠 **Concepte cheie:** pthreads, sincronizare, divizarea sarcinilor, performanță prin paralelizare.

---

## 🗓️ Laborator 5 — Structuri de date și câmpuri de biți
- **P1:** Ilustrează **împachetarea unei date (zi, lună, an)** într-un singur întreg de 16 biți, folosind **câmpuri de biți și uniuni**.  
  Programul permite citirea unei date, transformarea în format binar compact și afișarea reprezentării binare a fiecărui câmp.

🧠 **Concepte cheie:** câmpuri de biți, uniuni, manipulare binară, reprezentări compacte de date.

---

## 🧾 Note finale
- **Limbaj:** C  
- **Tematică:** Programare de nivel jos, operare directă cu memorie, funcții, procese și thread-uri.  
- **Structură:** Fiecare laborator conține fișiere sursă (`.c`, `.h`) și exemple de rulare.
- **Compilare și rulare:** Există un **fișier Makefile** pentru a facilita compilarea și rularea tuturor proiectelor prin comanda `make`.
- **Scop:** Consolidarea cunoștințelor de bază în programarea sistem și optimizarea execuției programelor în C.


## Link-uri utile

1. **Markdown** - limbaj de prezentare "pretty" pentru o documentatie `git` (in cazul in care considerati utila o scurta descriere a modulului) <https://www.markdownguide.org>
	- sintaxa de baza: <https://www.markdownguide.org/basic-syntax/>
	- _cheat-sheet_: <https://www.markdownguide.org/cheat-sheet/>
2. **Github** - comenzi uzuale: <https://education.github.com/git-cheat-sheet-education.pdf>
