# Objektinis-programavavimas-2
V1.0:

V0.1: Nuskaito vardą, pavardę, namų darbus ir egzamino rezultatą. 

Suskaičiuoja galutinį balą ir pateikia į ekraną

Mokinio gautieji balai už namų darbus bei egzaminą generuojami atsitiktinai




V0.2: Nuskaito vardą, pavardę, namų darbus ir egzamino rezultatą iš failo 

V0.3: Header failas

V0.4: Failu generavimas
Failu rusiavimas ir sukurimas dvieju failu


V0.5: Laikas per kiek su vector, list, deque ivygdyta


v1.0
1lib.cpp failas padarytas pagal:


1 strategija: Bendro studentai konteinerio (vector, list ir deque tipų) skaidymas (rūšiavimas) į du naujus to paties tipo konteinerius: "vargšiukų" ir "kietiakų". Tokiu būdu tas pats studentas yra dvejuose konteineriuose: bendrame studentai ir viename iš suskaidytų (vargšiukai arba kietiakai). Nesunku pastebėti, kad tokia strategija yra neefektyvi užimamos atminties atžvilgiu (įsitikinkite tuo!), tačiau šiame žingsnyje svarbiausia yra patyrinėti, kaip programos veikimo sparta priklauso nuo konteinerio tipo?

lib.cpp failas padarytas pagal:

2 strategija: Bendro studentų konteinerio (vector, list ir deque) skaidymas (rūšiavimas) panaudojant tik vieną naują konteinerį: "vargšiukai". Tokiu būdu, jei studentas yra vargšiukas, jį turime įkelti į naująjį "vargšiukų" konteinerį ir ištrinti iš bendro studentai konteinerio. Po šio žingsnio studentai konteineryje liks vien tik kietiakai. Atminties atveju tai efektyviau, tačiau dažni trynimai gali būti "skausmingi", ypač tam tikro tipo konteineriams.
P.s. Jeigu Jūsų šiuo metu realizuota strategija nesutampa nė su viena iš šių dviejų aukščiau aprašytų strategijų, turėsite palyginti tris strategijas: Jūsų ir abi aukščiau aprašytas strategijas.

![image](/assets/your-image18.jpg)
