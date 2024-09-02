# Gebruiksaanwijzing
## Opladen / Vervangen van de Batterijena
De batterijen kunnen uit de wagen worden verwijderd door ze uit de baterij houder te trekken, als deze gewoon vast geklemd zitten. Als deze met andere toepassing vast gezet zijn zoals een rekker of schroeven ofzo dan moet je deze eerst verwijderen. Indien de batterijen moeilijk loskomen, kan een schroevendraaier worden gebruikt om ze los te wrikken. Controleer altijd de spanning van de batterijen met een multimeter; indien de spanning onder de 8V ligt, dienen ze opgeladen te worden. Dit kan met de bijhorende lader bij mij is dit batterij en lader van een speelgoed autoje je kan ook lithium batterijen gebruiken met de bijpassende lader of herbruikbare batterijen wat ik niet zou aanraden. Zodra de lampjes groen branden op de arduino als je ze terug in het autotje steekt en de gecontroleerde spanning is hoog genoeg dan is ben je klaar om weer te rijden.

## Draadloze Communicatie
Verbinding Maken
Om verbinding te maken met de wagen via een smartphone, zorg dat de batterijen samen een spanning van meer dan 8V leveren. Download de app "Serial Bluetooth Terminal" (Android) op de smartphone om te communiceren met de wagen. Met de app kunnen verschillende commando's worden verzonden, en veelgebruikte commando's kunnen aan drukknoppen worden toegewezen voor eenvoudige toegang.
![image](https://github.com/user-attachments/assets/57ce1e9f-1bfe-4f2f-b178-25184cc3fdc0)


### Configureer de knoppen als volgt:

Knop 1: Name: "on", Value: "run on"
Knop 2: Name: "off", Value: "run off"
Knop 3: Name: "debug", Value: "debug"
Knop 4: Name: "?", Value: "cmd"
Maak verbinding met de Bluetooth-module "HC-05" via de Bluetooth-instellingen van de telefoon en gebruik de code "1234". Ga daarna naar de app en selecteer het apparaat onder "devices". Druk vervolgens op "connect". Zodra de melding "connected" verschijnt, is de verbinding succesvol.
Als je hierna een comando verstuurd check zeker eerst voor je andere instelling ofzo probeerd of de RX en TX draadjes naar de HC 05 niet omgekeerd moeten zitten dit kan je veel problemen besparen. Controleer ook of de boudrate in het programma 9600 is want de HC 05 staat standaard op deze boudrate en anders zijn ze niet compatiebel.
![image](https://github.com/user-attachments/assets/6547d450-c67c-4665-b856-94d7d3a53da8)
![image](https://github.com/user-attachments/assets/fcdb2a58-8758-431d-951a-802651a34763)

### Commando's

De wagen kan worden aangestuurd met diverse commando's. De vier voorgeprogrammeerde knoppen hebben de volgende functies:
"on" (run on): Start de motoren en laat de wagen rijden.
"off" (run off): Stopt de motoren en de wagen.
"debug": Geeft een lijst van alle huidige parameters van de wagen.
"? (cmd)": Toont alle mogelijke commando's die ook handmatig ingevoerd kunnen worden.
Extra commando's voor het instellen van parameters:

set cycle [µs]
set power [0..255]
set diff [0..1]
set kp [0..]
set ki [0..]
set kd [0..]
Voorbeeld: set ki 0.7

## Kalibratie van de Sensoren
Kalibreer de sensoren bij het rijden op een nieuw parcours om een duidelijk onderscheid tussen wit en zwart te garanderen.

Stap 1: Plaats de wagen op een volledig wit oppervlak en voer het commando "calibrate white" in. Wacht tot de melding "done" verschijnt.
Stap 2: Plaats de wagen op een volledig zwart oppervlak en voer het commando "calibrate black" in. Wacht tot de melding "done" verschijnt.
Controleer de sensorkalibratie door het commando "debug" in te voeren en te kijken of de waarden voor zwart en wit voldoende verschillen.

## Instellingen
De wagen rijdt stabiel met de volgende aanbevolen parameters. 
power: 85
diff: 0.20
Kp: 8.70
Ki: 0.90
Kd: 1.90
je kan de power iets hoger zetten maar dan is de kans groot dat hij bij een legere baterij bochten begint te missen.
