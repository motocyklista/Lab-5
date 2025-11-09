# Program: "Duże/małe/cyfry/inne"
Program napisany w języku C, który czyta znaki z klawiatury aż do naciśnięcia klawisza enter oraz zlicza: duże litery, małe litery, cyfry oraz inne znaki. Enter nie wchodzi do statystyk.

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
clang -Wall getchar.c
````
```


```

---
## Uruchomienie programu
Po kompilacji uruchom plik wykonywalny:

```bash
getchar.exe
```
Program poprosi o podanie tekstu i zakończenie go enterem. Następnie zwróci wynik:

---

### Przykłady działania

```
C:\Users\X\Desktop\homework>getchar.exe
Wpisz tekst (zakoncz enterem)
Ala ma kota!
Wynik: Ala ma kota!, DUZE: 1, MALE: 8, CYFRY: 0, INNE: 3
```
```
C:\Users\X\Desktop\homework>getchar.exe
Wpisz tekst (zakoncz enterem)
12345
Wynik: 12345, DUZE: 0, MALE: 0, CYFRY: 5, INNE: 0
```

---

## Działanie programu

1. Program prosi o podanie tekstu i zakończenie go enterem.
2. Program wczytuje tekst znak po znaku, zliczając: wielkie litery, małe litery, cyfry oraz inne znaki. 
3. Wczytywanie kończy się po naciśnięciu Enter, osiągnięciu końca pliku (EOF) lub wypełnieniu bufora.
4. Na końcu zwraca wynik z nazwą wpisanego tekstu oraz wyliczonymi znakami zgodnie z założeniem programu .

---
## 👤 Autor

* **Imię / Pseudonim:** Piotr
* **Rok:** 2025
* **Środowisko:** Visual Studio Code + Clang

```
