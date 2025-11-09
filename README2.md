# Program: "Szyfr Cezara: szyfrator + deszyfrator"
Program napisany w języku C, który szyfruje linię tekstu z przesunięciem o k (0 do 25). Program wypisuje linie: szyfr i klucz.

---

## Informacje techniczne
- **Język:** C  
- **Edytor:** Microsoft Visual Studio Code  
- **Kompilator:** Clang (`clang -Wall`)  
- **System:** Windows  

> 💡 Program skompilowany przy użyciu kompilatora Clang. Korzystałem z edytora MS Visual Studio Code.

---

## Kompilacja
Aby skompilować program, w terminalu uruchom:

```bash
clang -Wall cezar.c
````


---
## Uruchomienie programu
Po kompilacji uruchom plik wykonywalny:

```bash
cezar.exe
```
Program poprosi o podanie tekstu (max 199 znaków). Następnie zwróci wynik:

---

### Przykłady działania

```
C:\Users\X\Desktop\homework>cezar.exe
Podaj tekst do zaszyfrowania (max 199 znakow):
A b c
Podaj przesuniecie (0-25): 30
Blad: przesuniecie musi byc liczba od 0 do 25.
```
```
C:\Users\X\Desktop\homework>cezar.exe
Podaj tekst do zaszyfrowania (max 199 znakow):
Abc Zz!
Podaj przesuniecie (0-25): 2
Zaszyfrowany tekst: Cde Bb!
```

---

## Działanie programu

1. Program prosi o podanie tekstu do zaszyfrowania (max 199 znaków).  
2. Następnie prosi o przesunięcie "k" dla szyfru Cezara (0–25).  
3. Program szyfruje litery tekstu przesunięciem "k" w alfabecie, znaki inne niż litery pozostają bez zmian.  
4. Na końcu wyświetla zaszyfrowany tekst.

---
## 👤 Autor

* **Imię / Pseudonim:** Piotr
* **Rok:** 2025
* **Środowisko:** Visual Studio Code + Clang

```

