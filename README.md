# GRUPI-19
# Branch: Bliarta

Ky branch përmban disa përmirësime të lojës së numrit rastësor për të rritur interaktivitetin dhe përvojën e lojtarit. Ndryshimet kryesore janë si më poshtë:

1. **Zgjerimi i intervalit të numrit të rastësishëm (nga 1-5 në 1-10)**  
   - Lojtarët tani duhet të gjejnë një numër midis 1 dhe 10, jo më vetëm 1-5.  
   - Kjo e bën lojën më sfiduese dhe kërkon më shumë përqendrim nga përdoruesi.  
   - Ndryshimi është bërë vetëm në gjenerimin e numrit (`rand() % 10 + 1`) dhe në mesazhet e input-it për përdoruesin.  
   - Funksionalitetet tjera, si klasa `Player` dhe sistemi i pikëve, nuk janë prekur.

2. **Shtimi i shfaqjes së tentativave të përdorura**  
   - Kur lojtari gjen numrin e saktë, programi tregon sa tentativa janë përdorur për të arritur rezultatin.  
   - Ky përmirësim ndihmon lojtarin të kuptojë më mirë performancën e tij dhe i jep feedback të menjëhershëm.  
   - Ndryshimi është bërë duke shtuar një variabël `attemptsUsed` dhe një mesazh informues pas gjetjes së numrit të saktë.  
   - Të tjerat në lojë, përfshirë sistemin e pikëve dhe rrjedhën e përgjithshme të lojës, mbeten të pandryshuara.

