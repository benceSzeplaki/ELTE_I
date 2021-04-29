# 📓 Task TODO list (in hungarian)

Írj programot, amely parancssori argumentumként beolvas időpontokat és teendőket, 
és soronként fájlba írja az időpont-teendő párokat! A bemenet formátuma: <időpont> <teendő> <időpont> <teendő>... 
A kimeneti fájl neve todolist.txt legyen. Ha az összes argumentum helyes volt, a program ne írjon ki semmit a terminálra. 
Ha túl kevés argumentumot adtunk meg a fájlnak (0 vagy 1 input), írja ki a terminálra, hogy “Hibás bemenet!”, majd fejezze be a végrehajtást.

Hibás bemenet esetén a program írja a terminálra, hogy “Hibás bemenet!” (annyiszor, ahány hibás bemenetet talál), 
majd folytassa a következő helyes időpont-teendő párral a végrehajtást. 

Hibás a bemenet, ha: 
- nem a formátumnak megfelelően következnek az argumentumok, 
- az időpontok bármelyike nem felel meg a 00:00 és a 23:59 közötti időpontoknak, 
- a teendők bármelyike nem egy kizárólag kis- és nagybetűkből álló karaktersorozat (ékezetes betűket nem kell kezelni).

Az időpontok helyességét egy isValidTime() nevű függvényben, a teendők helyességét egy isValidTodo() nevű függvényben ellenőrizzük.

Példa helyes bementre:

./todo 13:58 beadando 00:00 alvas 08:30 reggeli

Példák hibás bemenetre:

./todo 13:58 beadando 24:00 alvas 08:30 reggeli
./todo 13:58 beadando alvas 00:00 08:30 reggeli

Előbbi esetben a második pár időpont tagja hibás, a 24:00 tesztelése után a 08:30 tesztelésével kell folytatni a végrehajtást. 
Utóbbi esetben a második pár tagjai fel vannak cserélve, az “alvás” tesztelése után szintén a 08:30-cal folytatjuk. 
Feltételezhetjük, hogy a bemenet nem hagy ki időpontot vagy teendőt, legfeljebb ezek formátuma lesz hibás.

A test_3_stud.sh fájl lefordítja és egy helyes bemenettel kipróbálja a programot, a megoldás ellenőrzésére használható. 
Input paraméternek a forrásfájl nevét (vagy abszolút elérési útvonalát) kell megadni.
