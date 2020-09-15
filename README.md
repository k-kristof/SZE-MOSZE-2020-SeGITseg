# SZE-MOSZE-2020-SeGITseg
**Beadandó feladat a Modern szoftverfejlesztési eszközök (GKNB_INTM006) nevű tárgyra**<br/>
Készítették: Boros Dávid (H89ZV9), Káldy Kristóf (R9ZHPM), Kreutzog András (TDM5KG)<br/>
Széchenyi István Egyetem, 2020/21-as tanév, 1. félév

## A program működése

A program 6 parancssori paramétert vár, amelyeknek felépítése a következő:<br/>
`unit1_name unit1_hp unit1_dmg unit2_name unit2_hp unit2_dmg`
- name: a karakter neve (string)
- hp: a karakter életereje (int)
- dmg: a karakter sebzése (int)

A játékot 2 karakter játssza, amelyek adatai a parancssori paraméterekből kerülnek betöltésre.<br/>
Amennyiben ez megtörtént megkezdődik a játék. A karakterek felváltva támadják egymást, sebzést okozva a másiknak. Minden körben kiírásra kerül hogy ki támadott kit és a karakterek aktuális állapota.<br/>
A játéknak akkor van vége, amikor az egyik karakter életereje 0-ra csökken. Ekkor a végeredmény kiírásra kerül és a program leáll.

## A program futtatása

A kódot először le kell fordítani:<br/>
- `g++ -std=c++17 *.cpp`<a/>

A program futtatása példaértékekkel:<br/>
- `./a.out Maple 150 10 Sally 45 30`
