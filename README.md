# Operacje na plikach c i c++

## Podstawy operacji na plikach w języku c

W języku C do operacji na plikach używamy funkcji z biblioteki <stdio.h>.

Pliki w języku c dzielim na dwie główne grupy zależne od ich dostępu do danych

- Pliki o dostępie sekwencyjnym.
  
- Pliki o dostępie swobodnym. 

### Pliki o dostępie sekwencyjnym
 Dane z takiego pliku należy odczytywać w takiej kolejności, w jakiej zostały zapisane.

Z plikiem o dostępie sekwencyjnym robi się tylko trzy rzeczy:
- Tworzy się go
- Odczytuje się z niego dane
- Dodaje się do niego dane

### Pliki o dostępie swobodnym  
 W przypadku takiego pliku informacje można odczytywać i zapisywać w dowolnie wybranych miejscach.

Aby zacząć operacje na plikach trzeba urzyć FILE *fptr.

By w ogóle można było coś zrobić w plikach trzeba użyć fopen() żeby otworzyć plik na kturym chcemy operować. Nie wolno używać pliku, jeśli funkcja fopen() zgłosi błąd (poprzez zwrócenie zera).

 Podstawowe tryby otwarcia pliku funkcji fopen():
 - dla dostępu sekwecyjnego:
   - „w” – tryb zapisu, w którym tworzony jest nowy plik
   - „r” – tryb odczytu istniejącego pliku
   - „a” – tryb, w którym dane są dodawane na końcu pliku lub tworzony jest nowy plik, jeśli podany plik nie istnieje.
 - dla dostępu swobodnego:
   - „r+” – otwiera istniejący plik z możliwością odczytu i zapisu
   - „w+” – otwiera nowy plik do zapisu i odczytu
   - „a+” – otwiera plik z możliwością dodawania danych (wskaźnik plikowy wskazuje na koniec tego pliku), ale umożliwia też przejście wstecz oraz odczytanie i zapisanie danych 
   „po drodze”.

Gdy już skończymy operacje na plikach używamy fclose() żeby zamknąć plik.

Inne funkcje podstawowe używane do operacji na plikach.
 - fprintf() - Służy do zapisywania sformatowanych danych do pliku.
 - fputs()
 - fgets() - Służy do odczytywania linii tekstu z pliku.
 - feof() - Sprawdza, czy osiągnięto koniec pliku.
 - fseek() - Ustawia pozycję wskaźnika pliku.
 - fputc() -
 - fscanf() - Odczytuje sformatowane dane z pliku.
## Podstawy operacji na plikach w języku c++

Aby rozpocząć prace nad plikami w języku c++ trzeba użyć funkcji z biblioteki <ifstream>.

Żeby otworzyć plik możemy zrobić na trzy sposoby 
-ifstream (do odczytu).
-ofstream (do zapisu).  
-fstream (do odczytu i zapisu).

### Tryby otwarcia plików.
Podczas otwierania pliku, możemy użyć różnych trybów, takich jak:
- ios::in – otwieranie pliku do odczytu
- ios::out – otwieranie pliku do zapisu
- ios::app – dopisywanie do pliku
- ios::binary – otwieranie pliku informujący kompilator o operacjach na danych binarnych.
- ios::ate – otwieranie pliku i ustawienie kursora na końcu.
- ios::trunc – zawartość pliku jest kasowana.

W języku c++ mamy otpowiednią funkcje ktura umożliwiaja nam opcje sprawdzenia czy otrzymaliśmy dostęp do pliku( good()).
Sytłacje w kturych nie uzyskamy dostępu do plików są takie jak:
- plik nie istnieje(ifstream).
- nie posiadamy otpowiednich uprawnień.

Gdy już zakończymy prace w pliku należy zamknoć plik funkcją close().

