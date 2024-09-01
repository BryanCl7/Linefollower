# Instructable

In deze sectie wordt de aanpak beschreven voor het bouwen van een rijdende robot. De focus ligt eerst op het correct positioneren en testen van alle componenten voordat definitieve verbindingen worden gemaakt. Dit wordt gerealiseerd door de onderdelen tijdelijk te verbinden met bedrading en deze op een plaatje te plaatsen voor een overzichtelijke opstelling.

### stap 1
bestel alle componenten uit de bill of materials 
| Component                                   | Model / Beschrijving                                | Prijs per stuk (€) | Aantal | Totaal (€) | Link                                                                  |
|---------------------------------------------|-----------------------------------------------------|--------------------|--------|------------|-----------------------------------------------------------------------|
| Microcontroller                             | ATmega32u4 (Arduino Leonardo)                       | 19,90              | 1      | 19,90      | [Link](https://whadda.com/nl/product/atmega32u4-leonardo-ontwikkelbord-wpb103/) |
| Mini Micro Metal Gear Motor 30:1            | 6V DC Gear Motor                                    | 5,00               | 2      | 10,00      | [Link](https://www.tinytronics.nl/shop/nl/mechanica-en-actuatoren/motoren/dc-motoren/aslong-jga12-n20-30-dc-transmissiemotor-6v-500rpm?fbclid=IwAR1u-LMwuQJD3mgTCO4AoHne9U6hnG0Yz1KG7pJNeg7NzDx2Ay1op920XMw) |
| H-brug                                      | DRV8833 Dual Motor Driver Carrier                   | 16,95              | 1      | 16,95      | [Link](https://www.vanallesenmeer.nl/DRV8833-Dual-Motor-Driver-Carrier-Pololu-2130?gclid=CjwKCAiAmsurBhBvEiwA6e-WPIBsegGwittozvcB6m5SHe9FdQcsteXlm8Xj9m_TJA7viCOSE4UreBoCJNoQAvD_BwE) |
| Infrared Reflection Sensors (8)             | QTR-8A Reflectance Sensor Array                     | 12,35              | 1      | 12,35      | [Link](https://www.vanallesenmeer.nl/QTR-8A-Reflectance-Sensor-Array-Pololu-960?gclid=CjwKCAiAmsurBhBvEiwA6e-WPESfFBC4gVZjiqnQ7vXWKjuIifyLNFbzevlTixKUkVR3WOfzj-IHWRoCD3MQAvD_BwE) |
| NIKKO NI-MH BATTERY PACK 9,6V met lader     | Rechargeable Battery (9,6V - 700mAh)                | recup              | 1      | recup      | -                                                                     |
| Bluetooth Module                            | HC-05                                               | 2,85               | 1      | 2,85       | [Link](https://nl.aliexpress.com/item/4000144439510.html?spm=a2g0o.productlist.main.1.5908139aQrhCsF&algo_pvid=4a5e5c42-d58a-45c1-9943-0cdae3c689d2&aem_p4p_detail=202312080752489106633218387090000295994&algo_exp_id=4a5e5c42-d58a-45c1-9943-0cdae3c689d2-0&pdp_npi=4%40dis%21EUR%213.00%212.85%21%21%213.16%21%21%40211b61ae17020507685531021ea840%2110000000438661080%21sea%21BE%210%21AB&curPageLogUid=Kh6Jn8DooFva&search_p4p_id=202312080752489106633218387090000295994_1) |
| Wielhouders                                | Micro Metal Gearmotor Bracket Pair                  | 4,95               | 1      | 4,95       | [Link](https://www.vanallesenmeer.nl/Micro-Metal-Gearmotor-Bracket-Pair-Black-Pololu-989?gclid=CjwKCAiAmsurBhBvEiwA6e-WPEul2iJFUSlVWHRO00z9ERrG0mlW9z6Wc7ezb0qhI3MgBeyGJD4lbBoCubcQAvD_BwE) |
| Wielen                                      | Pololu wheel 40x7mm Pair - Black                   | 7,25               | 1      | 7,25       | [Link](https://www.vanallesenmeer.nl/Wheel-40%C3%977mm-Pair-Pololu-1452/1453/1454?gclid=CjwKCAiAmsurBhBvEiwA6e-WPHzX60cO5VPQjRjlZcRoMAjekH47FnYHQb5lCrlD1Lyvtn_koZdvshoCbxMQAvD_BwE) |
| Dupont-draadjes                             | 10xman-vrouw en 20xman-man                         | recup                | 30     | recup     | -                  
| Breadboard                           |      MB-102 830/400 Punten Breadboard Prototype Board                    | 1,98                 | 1    | 1,98         |[Link](https://www.temu.com/ul/kuiper/un9.html?subj=goods-un&_bg_fs=1&_p_jump_id=894&_x_vst_scene=adg&goods_id=601099513243036&sku_id=17592195253973&adg_ctx=a-92d118b0~c-d14cc8e7~f-3e962b46&_x_ads_sub_channel=shopping&_p_rfs=1&_x_ns_prz_type=6&_x_ns_sku_id=17592195253973&mrk_rec=1&_x_ads_channel=google&_x_gmc_account=760631223&_x_login_type=Google&_x_ads_account=9370551288&_x_ads_set=20802353017&_x_ads_id=158931479434&_x_ads_creative_id=681990428390&_x_ns_source=g&_x_ns_gclid=Cj0KCQiAj_CrBhD-ARIsAIiMxT-pLHxwASqVzTrfLJ0jhk9U8RIukH6yW9x1GZfM6WGTXPh9PrrVubAaAv0KEALw_wcB&_x_ns_placement=&_x_ns_match_type=&_x_ns_ad_position=&_x_ns_product_id=760631223-en-17592195253973&_x_ns_target=&_x_ns_devicemodel=&_x_ns_wbraid=CjkKCQiA7OqrBhCFARIoACZa0OL22gWJ3hMkZZ1mKbGWUQOMSGpdDMEoTtUXnqaO0eZhieR-ZxoCjgw&_x_ns_gbraid=0AAAAAo4mICE-zCsBcAoemzdRXFu2lWIaU&_x_ns_targetid=pla-2231984345651&gad_source=1&gclid=Cj0KCQiAj_CrBhD-ARIsAIiMxT-pLHxwASqVzTrfLJ0jhk9U8RIukH6yW9x1GZfM6WGTXPh9PrrVubAaAv0KEALw_wcB)
| chassis                           | plankje als shasie en batterij houder                        | recup           | 30cm²    |recup        | -                  |
|




stap 2
Nu we al het materiaal beschikbaar hebben, stellen we de linefollower samen. Als frame van de auto ga je best opzoek naar een houten plankje, of ander recupmateriaal. Ik heb zelf hiervoor een trespa plaatje gekozen omdat dit materiaal tegen hoge warmtes kan zonder te vervormen of in brand te schieten. Wat ik voral handig vond om mijn baterij houder uit te maken want als je daar dan moet op solderen vliegd dit niet zomaar in brand zoals andere mateialen zoals houd wel zouden durven doen. De afmetingen van dit plaatje moeten ongeveer een 180x100mm zijn . Er kan voor gekozen worden om met een figuurzaag extra vorm te geven, zodat dit het frame van een gestroomlijnde wagen kan voorstellen. Dit kan uiteraard ook achteraf gebeuren. Vervolgens monteren we de batterijhouder op ons frame. Deze zetten we op de achterkant van onze plank, mooi in het midden. Ernaast worden 2 blokjes (500x250x10mm) geplakt, zodat we later de arduino boven de batterijhouder kunnen plaatsen. Het vastplakken van de houtblokjes en batterijhouder kan gebeuren met behulp van houtlijm. 405333687_223592240758807_7123575042251916946_n

stap 3
In deze stap gaan we de motoren monteren op het frame. Hiervoor gebruiken we de "wielhouders" die samen met de motoren werden aangekocht. Bij het monteren van deze houders is het belangrijk dat ze allebei op de zelfde afstand worden gemonteerd, zodat ze mooi in lijn liggen met elkaar en de auto dus niet scheef zal gaan rijden. Via de volgende 2 foto's kan worden afgeleid waar ik deze ongeveer heb gemonteerd:

405266047_1487613928690795_4685521728919634876_n 404350260_309790145228844_7951685887738030043_n

Vervolgens werden gaatjes geboord, zodat de bijgeleverde boutjes gemakkelijk in het hout konden worden gedraaid.

405154670_3388969721320824_5026883236161777480_n 405283208_1006741277289677_2358455657544103621_n

Als laatste solderen we 2 dupontdraadjes aan de motoren, alvorens we deze vaststeken in de gemonteerde klemmen. Dit zodat we alle ruimte hebben om dit te kunnen doen.

403688872_365273492548581_5732422698806328131_n

stap 4
Om de andere componenten, zoals de H-Brug en de bluetooth module te monteren gebruiken we simpelweg een elastiekje zodat alles mooi blijft zitten.

405139945_312554088254143_3331511207421659937_n

Vervolgens nemen we het elektronisch schema erbij en gaan we alles aansluiten aan de hand van dupont-draadjes. In het schema is te zien dat er 3 knooppunten zijn. 2 bij de batterijspanning en 1 bij de 5V spanning. Hiervoor gaan we gebruik maken van 3 kroonklemmen:

403625895_3664321383829692_851847983461746198_n

Ook de sensor moet nog worden gemonteerd aan de onderzijde van de wagen. Hiervoor werden als eerst de twee sensoren die afzonderlijk kunnen werken van het breakout board gebroken. Zo hebben we nog steeds 6 sensoren, wat alles wat compacter maakt. image

Hierna meten we af waar de draadjes via de onderkant van ons frame naarboven zullen komen, als de sensor mooi in het midden gemonteerd zit. Op deze plek worden verschillende gaatjes geboord, waar we uiteindelijk een mooie gleuf van maken:

403804083_266288663098954_5267448171383346415_n

405217240_2342251582633342_3867722100881489745_n

Als laatste word de sensor nog eens extra vastgezet door 2 kleine boutjes in het frame te vijzen.

403641477_1091571545612815_5156694672164627113_n

stap 5
In de voorlaatste stap zetten we de arduino op de twee houten blokjes, die we opnieuw vastmaken met een simpel elastiekje. Vervolgens verbinden we alle componenten, zoals in het elektronisch schema wordt weergegeven:

image

(In dit schema worden nog 2 weerstanden gebruikt om de spanning voor de bluetooth module te beperken. Na wat onderzoek op het internet bleek dit niet nodig te zijn, dus mag deze rechtsreeks verbonden worden met de pin op de arduino.)

405132827_636497835104419_2663353506568405863_n

De 3 kroonklemmen kunnen opnieuw met houtlijm worden vastgeplakt op de voorzijde van het frame. Als extra optie kunnen ook twee extra wielen worden gemonteerd aan de voorzijde. Je kan er ook voor kiezen om de auto te laten slepen.

403647766_1569203267187191_374478284157019129_n

Indien de voorgaande stappen correct werden gevolgd, zou het eindresultaat er ongeveer zo moeten uitzien:

400920108_895944135587999_7262908235151916565_n

stap 6
Nu moeten we enkel nog het juiste programma gaan uploaden in de arduino. De code die moeten worden upgeload kan worden teruggevonden als bestand in deze repository. Als je dit bestand opent met de arduino IDE software kan linksboven op de upload knop worden gedrukt. Nadat het uploaden is geslaagd kunnen de batterijen in de auto worden gestopt, kan verbinding via bluetooth worden gemaakt met de telefoon, en zal de auto werken! (Voor meer info over de bediening van de auto via bluetooth, zie https://github.com/jorenverdegem/Linefollower/tree/main/gebruiksaanwijzing .
