Acest program scris în limbajul C rezolvă problema rucsacului (Knapsack Problem) aplicată în contextul pescuitului de homari. Programul determină valoarea maximă a homarilor care pot fi reținuți într-o plasă cu o capacitate limitată, luând în considerare dimensiunea și valoarea fiecărui homar. Funcționalitatea principală implică citirea datelor de intrare de la utilizator, calcularea valorii maxime printr-o abordare de programare dinamică și afișarea rezultatului final, inclusiv detaliile despre care homari au fost selectați pentru a fi incluși în plasă.
     Fișierele componente:
1.	main.c - conține funcția principală a programului, main(), unde se inițiază executarea programului
2.	afisare_dimensiune.c -  implementează două funcții esențiale: max și afisare_homari
3.	afisare_homari.h - conține declarațiile pentru funcțiile afisare_homari și max, împreună cu definiția constantă MAX_HOMARI
4.	header.h - servește drept un header centralizat care include alte fișiere de antet necesare pentru funcționarea programului
5.	main.h - include biblioteca standard de intrare/ieșire stdio.h, care este esențială pentru funcțiile de intrare și ieșire ale programului, cum ar fi printf și scanf
      Funcția main() (în main.c)
Inițiază programul, citește numărul de homari (n) și capacitatea plasei (x), apoi dimensiunile și valorile fiecărui homar. Folosește programarea dinamică pentru a calcula și afișa valoarea maximă a homarilor capturați și apelează funcția afisare_homari pentru a afișa detalii despre homarii selectați.
     Funcția max() (în afisare_dimensiune.c)
Returnează valoarea mai mare dintre două numere întregi. Este utilizată în algoritmul de programare dinamică pentru a determina combinația optimă de homari.     Funcția afisare_homari() (în afisare_dimensiune.c)
     Funcția afisare_homari() (în afisare_dimensiune.c)
Afișează homarii selectați în soluția optimă. Parcurge matricea dp pentru a determina și afișa dimensiunea și valoarea fiecărui homar inclus în plasă.    
      Fișierul afisare_homari.h
Conține prototipurile funcțiilor afisare_homari și max, și definește MAX_HOMARI (100). Permite utilizarea acestor funcții în alte fișiere ale programului.     
     Fișierul header.h
Centralizează includerea fișierelor de antet necesare (afisare_homari.h și main.h), simplificând gestionarea dependențelor.
     Fișierul main.h
Include biblioteca standard stdio.h, necesară pentru funcțiile de intrare și ieșire (scanf și printf). Asigură accesul la funcțiile de bază ale C pentru interacțiunea cu utilizatorul.
