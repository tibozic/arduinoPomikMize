# Stoječa miza z Arduino
Timotej Božič in Nik Jukič <br>

Projekt omogoča premikanje stoječe mize v smeri navzgor ali navzdol s pomočjo elektromagnetnih ventilov, krmiljenih z Arduinom.
Sistem je zasnovan za enostavno in intuitivno upravljanje s tipkami ter zagotavlja varno in zanesljivo delovanje z uporabo končnih stikal za zaznavanje skrajnih položajev.

## Funkcionalnosti sistema
- Pomik mize navzgor: Aktivira se s pritiskom na tipko GOR. Ko miza doseže zgornji položaj, ki ga zazna zgornje končno stikalo, se gibanje samodejno zaustavi.
- Pomik mize navzdol: Aktivira se s pritiskom na tipko DOL. Gibanje se zaustavi ob dosegu spodnjega položaja, zaznanega z uporabo spodnjega končnega stikala.
- Zaustavitev gibanja: Kadarkoli med gibanjem lahko uporabnik pritisne tipko STOP za takojšnje zaustavitev.
- Sprememba smeri: Sistem omogoča neposredno spremembo smeri pomika brez potrebe po predhodnem zaustavljanju. Smer se spremeni s pritiskom na ustrezno tipko (GOR ali DOL).

## Tehnologije
- Arduino
- C
- Fritzing
  
## Komponente sistema
- Arduino Uno: Osrednji krmilnik, ki izvaja logiko za upravljanje elektromagnetnih ventilov in prepoznavanje stanj tipk ter končnih stikal.
- DC motor: Uporabljen za pogon mehanizma za premikanje mize.
- Krmilnik L293D: Uporabljen za nadzor hitrosti in smeri DC motorja.
- Elektromagnetni ventili: Omogočajo usmerjanje gibanja mize.
- Končna stikala: Ena stikalo na zgornji in ena na spodnji legi za zaznavanje končnih položajev.
- Tipke: Tipke GOR, DOL in STOP za ročno upravljanje sistema.

## Delovanje 
Uporabnik upravlja pomik mize s pritiskom na tipke. 
Arduino spremlja stanje tipk in končnih stikal ter ustrezno upravlja elektromagnetne ventile in DC motor prek krmilnika L293D.
Gibanje je omejeno z zaznavanjem skrajnih položajev, čemur sledi samodejna zaustavitev motorja. Sistem omogoča nemoteno spremembo smeri, kar poenostavi upravljanje.


## Shema
### Breadboard:
![breadboard](https://user-images.githubusercontent.com/63909145/84502208-34eb0980-acb8-11ea-9022-56d534a810d9.png)

### Shema: 
![schema](https://user-images.githubusercontent.com/63909145/84502821-54cefd00-acb9-11ea-84c1-edc222e319f3.png)

