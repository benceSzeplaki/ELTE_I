# 📓 Task Run Lenght Encoding (in hungarian)
A feladat egy egyszerű karakterlánc-kódolás implementálása. Az implementációhoz definiáljuk a következő két structot:  
  
A Pair tagjai:  
 - c: a kódolt karakter  
 - n: a c egymást követő előfordulásainak száma  
  
Az Encoded tagjai:  
 - length: pozitív egész szám, amely tartalmazza, hány elemből áll a kódolt végeredmény.  
 - arr: egy (length méretű) dinamikus tömb, amely Pair típusú pointereket tárol.  
  
1. Kódolás  
A karakterláncok kódolását az encode függvény végzi, amely kapjon egy string-et és adjon vissza egy pointer-t egy Encoded structra.   
Egy string kódolása az alábbi módon történik:  
  
 - aaabbccc -> (a, 3) (b, 2) (c, 3)  
   Ebben az esetben a length mező értéke 3.  
  
2. Dekódolás  
A stringek dekódolását egy decode nevű függvényben végezzük.  
Ez egy Encoded pointert kap, és egy stringgel tér vissza, ami tartamazza az eredeti szöveget.  
  
3. A program követelményei  
A program kérjen be a felhasználótól egy csak kisbetűkből álló szöveget. Ha ez a feltétel nem teljesül, a program írja ki a standard inputra,   
hogy “Hibás bemenet!”, és fejezze be a futást. Ha a felhasználó helyes inputot adott meg, a program írja ki az encode függvénnyel kódolt,  
majd a decode függvénnyel dekódolt szöveget, majd fejezze be a futást.  
Az előző példa esetén:  
 - input: aaabbccc  
 - output: 3a2b3c -> aaabbccc  
A program a kódolt szövegen vagy a hibaüzeneten kívül semmit ne írjon ki.  
  
4. A program legyen több forrásfájlra bontva:  
 - main.c, amiben csak a main fuggveny legyen.
 - rle.h header, amiben a structok definíciója és az encode, decode függvények deklarációja legyen. A header fájl tartalmazzon header guardot!
 - rle.c fájl, ami az előbbi függvények definícióját tartalmazza.
