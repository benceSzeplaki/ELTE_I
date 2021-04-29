# 📓 Task Heap (in hungarian)

1. Adatokat (továbbiakban person) tárolunk a heapen, ehhez írjunk egy programot, ami kezeli a hozzáadást, listázást, (opcionálisan törlést,) memóriát.  
 
2. Az adat személyek neve, melyet char[30]-ban tárolunk  
 
3. A programunk fusson akármeddig, standard inputról várjon bemenetet (menüpontokat):  
- a: új személy hozzáadása az adatbázishoz, ekkor bekér a standard inputról adatokat  
- l: teljes adatbázis kiírása  
- x: kilépés a programból  
  
4. Legyen egy globális pointer tömbünk (továbbiakban iterator), amiben az így tárolt personokra mutató pointereket tároljuk:  
ezen fogunk tudni végighaladni, és ezzel keresni az adatbázisunkban vagy listázni az összes persont. Tehát az iterator típusa a neveket tároló esetben char**.  
  
5. Az iterátorunk tömbjét a program elején a heapen foglaljuk le 10-es mérettel, de ha több person érkezne be a usertől,  
akkor 5-ösével növelhetjük a tömb méretét (pl. a 11. személy hozzáadásakor növeljük 15-re, a 16. személynél 20-ra stb.).  
Egy adott person (ami szintén mutató, hiszen dinamikusan allokáltuk) az iterator[i]-vel érhető el, i = 0..count-1 (count: lásd mindjárt).    
  
6. Legyen két globális változó:  
- Az adatbázis és az iterátorunk mérete (size), amit “add/delete” esetén ellenőrizhetünk, valamint változtatni is kell ilyenkor,  
- A personok aktuális száma (count), ez adja meg az iterációnk felső határát.  

7. A kilépést, új személy hozzáadását és az adatbázis kiírását (illetve az opcionális törlést) külön függvényekben valósítsuk meg (exit, add, list (, delete))!  
  
8. Ha a user nem a bekért karaktereket adja be, vagy túllépi a névnél engedett 30 karaktert, adjunk vissza hibaüzenetet a user számára!  
