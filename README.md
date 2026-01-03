# GRUPI-19
Guess The Number – C++ Game

Guess The Number është një lojë e thjeshtë në C++, ku përdoruesi duhet të gjejë një numër të fshehur që kompjuteri e zgjedh rastësisht. Kjo lojë ndihmon në zhvillimin e logjikës dhe mendimit matematikor, si dhe jep mundësi për të praktikuar programim bazë në C++.

 Përshkrimi i lojës

Numri i fshehur: Programi zgjedh një numër rastësor brenda një intervali, zakonisht nga 1 në 100.

Tentativat e përdoruesit: Ti fut një numër dhe kompjuteri të tregon nëse është më i madh ose më i vogël se numri i fshehur.

Udhëzime pas çdo tentative:

“Too high!” → numri yt është më i madh se numri i fshehur
“Too low!” → numri yt është më i vogël se numri i fshehur
Fitimi i lojës: Loja përfundon kur përdoruesi gjen numrin e saktë. Programi shfaq numrin e tentativave që duheshin për të gjetur numrin.

Qëllimi i lojës: Të gjesh numrin me sa më pak tentativa.

📂 Struktura e projektit
📁 Projekti
 ├── GuessTheNumber.cpp   // Kodi final i lojës
 └── README.md            // Dokumentimi i projektit


▶️ Si të ekzekutohet programi
1️⃣ Kompilo programin

Në terminal (Linux/Mac) ose Command Prompt (Windows):

g++ GuessTheNumber.cpp -o game


g++ → kompajler për C++

GuessTheNumber.cpp → fajlli me kodin e lojës

-o game → krijon një executable me emrin “game”

2️⃣ Ekzekuto programin

Në Linux/Mac:

./game


Në Windows:

game.exe

3️⃣ Si përdoret loja

Programi tregon mesazhin:

Guess the number between 1 and 100:


Fut një numër dhe shtyp Enter

Programi tregon mesazhin:

“Too high!” → numri yt është më i madh se numri i fshehur

“Too low!” → numri yt është më i vogël se numri i fshehur

“Correct! You guessed it in X tries!” → ke gjetur numrin dhe shfaqet numri total i tentativave

Loja vazhdon derisa të gjesh numrin e saktë.

4️⃣ Shembull ekzekutimi
Guess the number between 1 and 100: 50
Too low!
Guess the number between 1 and 100: 75
Too high!
Guess the number between 1 and 100: 63
Correct! You guessed it in 3 tries!

👥 Anëtarët e grupit

Bliarta
Atien
Blerta 
Aurora 

🔀 Menaxhimi i kodit (GitHub)

Projekti është zhvilluar duke përdorur branch-e dhe pull request-e
Të gjitha pull request-et janë merged me sukses
Versioni final ndodhet në branch-in main
Integrimi final është realizuar nga Bliarta, duke përfshirë punën e të gjithë grupit

🏁 Përfundim

Ky projekt demonstron:

Puna ekipore dhe bashkëpunimi në GitHub
Zhvillim i logjikës programore dhe përdorimi i gjuhës C++
Konceptet bazë të programimit si input/output, loops, kontrolli i kushtëve dhe funksionet
Qëllimi i lojës është të praktikojë aftësitë logjike dhe të argëtojë përdoruesin me një lojë interaktive.
