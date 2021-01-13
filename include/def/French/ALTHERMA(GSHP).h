#include "labeldef.h"
//  This file is a definition file for the ESPAtherma.
//  uncomment each value you want to query for your installation.

LabelDef PROGMEM labelDefs[] = {
//{0x00,0,801,0,-1,"*Type de réfrigérant"},
//{0x00,1,996,1,-1,"Override CMD:0x00 N_INV=1"},
//{0x00,2,996,0,-1,"Override CMD:0x00 N_STD=0"},
//{0x00,3,996,2,-1,"Override CMD:0x00 N_FAN=2"},
//{0x00,4,996,2,-1,"Override CMD:0x00 N_EV=2"},
//{0x00,5,996,1,-1,"Override CMD:0x00 N_20S=1"},
//{0x00,6,996,1,-1,"Override CMD:0x00 N_CH=1"},
//{0x00,7,996,3,-1,"Override CMD:0x00 N_SV=3"},
//{0x00,0,152,1,-1,"Qté de données du capteur"},
//{0x00,1,152,1,-1,"Qté compresseur INV"},
//{0x00,2,152,1,-1,"Qté compresseur STD"},
//{0x00,3,152,1,-1,"Qté de données de ventilateur"},
//{0x00,4,152,1,-1,"Qté de données de détendeur électronique"},
//{0x00,5,152,1,-1,"Qté de données de vanne à 4 voies"},
//{0x00,6,152,1,-1,"Qté de résistance de carter"},
//{0x00,7,152,1,-1,"Qté électrovanne"},
//{0x00,8,152,1,-1,"Unités intérieures connectables max."},
//{0x00,9,152,1,-1,"Qté unité intérieure connectée"},
//{0x00,10,152,1,-1,"O/U MPU ID (xx)"},
//{0x00,11,152,1,-1,"O/U MPU ID (yy)"},
//{0x00,12,105,1,-1,"Capacité O/U (kW)"},
//{0x10,0,217,1,-1,"Mode de fonctionnement"},
//{0x10,1,307,1,-1,"Thermostat ON/OFF"},
//{0x10,1,306,1,-1,"Attente de redémarrage"},
//{0x10,1,305,1,-1,"Commande de démarrage"},
//{0x10,1,304,1,-1,"Dégivrage"},
//{0x10,1,303,1,-1,"Commande de retour d huile"},
//{0x10,1,302,1,-1,"Opération d égalisation de pression"},
//{0x10,1,301,1,-1,"Signal de demande"},
//{0x10,1,300,1,-1,"Contrôle de bruit réduit"},
//{0x10,4,203,1,-1,"Type de dysfonctionnement"},
//{0x10,5,204,1,-1,"Code de dysfonctionnement"},
//{0x10,6,114,2,1,"Temp. évap. cible"},
//{0x10,8,114,2,1,"Temp. cond. cible"},
//{0x10,10,307,1,-1,"Chute de temp. refoulement"},
//{0x10,10,310,1,-1,"Qté réessai de protection de temp. refoulement"},
//{0x10,10,303,1,-1,"Chute de courant INV comp."},
//{0x10,10,311,1,-1,"Qté réessai de protection de courant INV. comp."},
//{0x10,11,307,1,-1,"Contrôle de chute de HP"},
//{0x10,11,310,1,-1,"Qté réessai de protection HP"},
//{0x10,11,303,1,-1,"Contrôle de chute de BP"},
//{0x10,11,311,1,-1,"Qté de réessai de protection de BP"},
//{0x10,12,307,1,-1,"Contrôle de chute temp. ailette"},
//{0x10,12,310,1,-1,"Qté réessai protection temp. ailette"},
//{0x10,12,303,1,-1,"Autre contrôle de chute"},
//{0x10,12,311,1,-1,"Non utilisé"},
//{0x11,0,215,1,-1,"O/U EEPROM (1ère chiffres)"},
//{0x11,1,215,1,-1,"O/U EEPROM (3ème 4ème chiffres)"},
//{0x11,2,215,1,-1,"O/U EEPROM (5ème 6ème chiffres)"},
//{0x11,3,215,1,-1,"O/U EEPROM (7ème 8ème chiffres)"},
//{0x11,4,215,1,-1,"O/U EEPROM (10ème chiffres)"},
//{0x11,5,214,1,-1,"O/U EEPROM (11ème chiffres)"},
//{0x00,0,995,1,-1,"NextDataGrid"},
//{0x20,0,105,2,1,"Temp. d air extérieur(R1T)"},
//{0x20,2,105,2,1,"Thermistor à 2 phases (R4T)"},
//{0x20,4,105,2,1,"Temp. tuyau refoulement"},
//{0x20,6,105,2,1,"Temp. tuyau d aspiration (R3T)"},
//{0x20,8,105,2,1,"Entrée de temp. d eau glycolée (R5T)"},
//{0x20,10,105,2,1,"Laisser temp. eau glycolée (R6T)"},
//{0x20,12,105,2,1,"Temp. de dissipateur de chaleur (R10T)"},
//{0x20,14,105,2,2,"Pression"},
//{0x20,14,405,2,1,"Pression(T)"},
//{0x20,16,105,2,-1,"Non utilisé"},
//{0x20,18,105,2,-1,"Non utilisé"},
//{0x21,0,105,2,-1,"Courant primaire INV (A)"},
//{0x21,2,105,2,-1,"Courant secondaire INV (A)"},
//{0x21,4,101,2,-1,"Tension (phase N) (V)"},
//{0x21,6,307,1,-1,"Interrupteur de débit d eau glycolée"},
//{0x21,6,306,1,-1,"Non utilisé"},
//{0x21,6,305,1,-1,"Non utilisé"},
//{0x21,6,304,1,-1,"Non utilisé"},
//{0x21,6,303,1,-1,"Non utilisé"},
//{0x21,6,302,1,-1,"Non utilisé"},
//{0x21,6,301,1,-1,"Non utilisé"},
//{0x21,6,300,1,-1,"Non utilisé"},
//{0x21,7,105,2,1,"Temp. d entrée d eau glycolée"},
//{0x21,9,105,2,1,"Temp. de sortie d eau glycolée"},
//{0x21,11,105,2,1,"Temp. réfrig. entrée évap."},
//{0x21,13,105,2,1,"Temp. réfrig. sortie évap."},
//{0x21,15,105,1,-1,"Non utilisé"},
//{0x21,16,105,1,-1,"Non utilisé"},
//{0x21,17,105,1,-1,"Non utilisé"},
//{0x21,18,105,1,-1,"Non utilisé"},
//{0x00,0,995,1,-1,"NextDataGrid"},
//{0x3*,0,152,1,-1,"Fréquence INV (rps)"},
//{0x3*,1,152,1,-1,"Fréquence INV 2 (rps)"},
//{0x3*,0,307,1,-1,"Compresseur STD 1"},
//{0x3*,0,306,1,-1,"Compresseur STD 2"},
//{0x3*,0,211,1,-1,"Ventilateur 1 (palier)"},
//{0x3*,1,211,1,-1,"Ventilateur 2 (palier)"},
//{0x3*,0,151,2,-1,"Détendeur électronique (pls)"},
//{0x3*,2,151,2,-1,"Détendeur électronique2 (pls)"},
//{0x3*,4,151,2,-1,"Détendeur électronique3 (pls)"},
//{0x3*,6,151,2,-1,"Détendeur électronique4 (pls)"},
//{0x3*,8,151,2,-1,"Détendeur électronique5 (pls)"},
//{0x3*,0,307,1,-1,"Vanne à 4 voies"},
//{0x3*,0,306,1,-1,"Vanne à 4 voies 2"},
//{0x3*,0,305,1,-1,"Vanne à 4 voies 3"},
//{0x3*,0,304,1,-1,"Vanne à 4 voies 4"},
//{0x3*,0,303,1,-1,"Vanne à 4 voies 5"},
//{0x3*,0,307,1,-1,"Résistance de carter"},
//{0x3*,0,306,1,-1,"Résistance de carter 2"},
//{0x3*,0,305,1,-1,"Résistance de carter 3"},
//{0x3*,0,304,1,-1,"Résistance de carter 4"},
//{0x3*,0,307,1,-1,"SV (gaz chaud)"},
//{0x3*,0,306,1,-1,"SV (BPH)"},
//{0x3*,0,305,1,-1,"Electrovanne 3"},
//{0x3*,0,304,1,-1,"Electrovanne 4"},
//{0x3*,0,303,1,-1,"Electrovanne 5"},
//{0x00,0,998,1,-1,"In-Out separator"},
//{0x60,0,304,1,-1,"Activer/Désactiver les données"},
//{0x60,1,152,1,-1,"Adresse d unité intérieure"},
//{0x60,2,315,1,-1,"I/U mode de fonctionnement"},
//{0x60,2,303,1,-1,"Thermostat ON/OFF"},
//{0x60,2,302,1,-1,"Protection antigel"},
//{0x60,2,301,1,-1,"Mode silencieux"},
//{0x60,2,300,1,-1,"Protection antigel pour tuyauterie eau"},
//{0x60,3,204,1,-1,"Code de dysfonctionnement"},
//{0x60,4,314,2,-1,"Code d unité intérieure"},
//{0x60,6,219,1,-1,"Code de capacité I/U"},
//{0x60,7,105,2,1,"Point de réglage de DHW"},
//{0x60,9,105,2,1,"Point de réglage LW (principal)"},
//{0x60,11,307,1,-1,"Interrupteur de débit d eau"},
//{0x60,11,306,1,-1,"Protecteur thermique (Q1L) BUH"},
//{0x60,11,305,1,-1,"Protecteur thermique BSH"},
//{0x60,11,304,1,-1,"Alimentation débit kWh avantageux"},
//{0x60,11,303,1,-1,"Entrée solaire"},
//{0x60,11,302,1,-1,"Non utilisé"},
//{0x60,11,301,1,-1,"Non utilisé"},
//{0x60,11,300,1,-1,"Fonctionnement bivalent"},
//{0x60,12,307,1,-1,"Vanne à 2 voies (On:Chaud_Off:Froid)"},
//{0x60,12,306,1,-1,"Vanne à 3 voies (On:DHW_Off:Espace)"},
//{0x60,12,305,1,-1,"BSH"},
//{0x60,12,304,1,-1,"Palier1 BUH"},
//{0x60,12,303,1,-1,"Palier2 BUH"},
//{0x60,12,302,1,-1,"BPH"},
//{0x60,12,301,1,-1,"Fonctionnement de la pompe à eau"},
//{0x60,12,300,1,-1,"Fonctionnement pompe solaire"},
//{0x60,13,152,1,-1,"Code d option intérieur"},
//{0x60,15,215,1,-1,"I/U Software ID (xx)"},
//{0x60,14,215,1,-1,"I/U Software ID (yy)"},
//{0x60,16,152,1,-1,"I/U EEPROM Ver."},
//{0x61,0,307,1,-1,"Activer/Désactiver les données"},
//{0x61,1,152,1,-1,"Adresse d unité intérieure"},
//{0x61,2,105,2,1,"Laisser temp. eau avant BUH (R1T)"},
//{0x61,4,105,2,1,"Laisser temp. eau après BUH (R2T)"},
//{0x61,6,105,2,1,"Temp. réfrig. côté liquide (R3T)"},
//{0x61,8,105,2,1,"Temp. d eau d entrée (R4T)"},
//{0x61,10,105,2,1,"Temp. de réservoir de DHW (R5T)"},
//{0x61,12,105,2,1,"Temp. ambiante intérieure (R1T)"},
//{0x61,13,105,2,1,"Capteur ext. de temp. ambiante intérieure (R6T)"},
//{0x62,0,307,1,-1,"Activer/Désactiver les données"},
//{0x62,1,152,1,-1,"Adresse d unité intérieure"},
//{0x62,2,307,1,-1,"Réchauffement ON/OFF"},
//{0x62,2,306,1,-1,"Stockage éco  ON/OFF"},
//{0x62,2,305,1,-1,"Stockage confort ON/OFF"},
//{0x62,2,304,1,-1,"Fonctionnement DHW puissant. ON/OFF"},
//{0x62,2,303,1,-1,"Fonctionnement chauffage espace ON/OFF"},
//{0x62,2,302,1,-1,"Système OFF"},
//{0x62,2,301,1,-1,"Non utilisé"},
//{0x62,2,300,1,-1,"Mode secours (intérieur) activé/désactivé"},
//{0x62,3,105,2,1,"Point de réglage LW (ajouté)"},
//{0x62,5,105,2,1,"Point de réglage RT"},
//{0x62,7,307,1,-1,"Rafraîch. entrée RT ext. ajouté"},
//{0x62,7,306,1,-1,"Chauff. entrée RT ext. ajouté"},
//{0x62,7,305,1,-1,"Rafraîchissement RT principal"},
//{0x62,7,304,1,-1,"Chauffage RT principal"},
//{0x62,7,303,1,-1,"Limite consommation courant 4"},
//{0x62,7,302,1,-1,"Limite consommation courant 3"},
//{0x62,7,301,1,-1,"Limite consommation courant 2"},
//{0x62,7,300,1,-1,"Limite consommation courant 1"},
//{0x62,8,307,1,-1,"Aucun"},
//{0x62,8,306,1,-1,"Non utilisé"},
//{0x62,8,305,1,-1,"Non utilisé"},
//{0x62,8,304,1,-1,"Non utilisé"},
//{0x62,8,303,1,-1,"Non utilisé"},
//{0x62,8,302,1,-1,"Fonctionnement de pompe de circulation"},
//{0x62,8,301,1,-1,"Sortie d alarme"},
//{0x62,8,300,1,-1,"Sortie fonctionnement espace H"},
//{0x62,9,105,2,-1,"Capteur de débit (l/min)"},
//{0x62,11,105,1,2,"Pression d eau"},
//{0x62,12,152,1,-1,"Signal de pompe à eau (0:max-100:arrêt)"},
//{0x62,13,152,1,-1,"[Futur] Mélange vanne à 3 voies 1"},
//{0x62,14,152,1,-1,"[Futur] Mélange vanne à 3 voies 2"},
//{0x62,15,152,1,-1,"Non utilisé"},
//{0x62,16,307,1,-1,"Non utilisé"},
//{0x62,16,306,1,-1,"Non utilisé"},
//{0x62,16,305,1,-1,"Non utilisé"},
//{0x62,16,304,1,-1,"Non utilisé"},
//{0x62,16,303,1,-1,"Non utilisé"},
//{0x62,16,302,1,-1,"Non utilisé"},
//{0x62,16,301,1,-1,"Non utilisé"},
//{0x62,16,300,1,-1,"Non utilisé"},
//{0x63,0,307,1,-1,"Activer/Désactiver les données"},
//{0x63,1,152,1,-1,"Adresse d unité intérieure"},
//{0x63,2,215,1,-1,"I/U EEPROM (3ème chiffres)"},
//{0x63,3,215,1,-1,"I/U EEPROM (4ème 5ème chiffres)"},
//{0x63,4,215,1,-1,"I/U EEPROM (6ème 7ème chiffres)"},
//{0x63,5,215,1,-1,"I/U EEPROM (8ème 9ème chiffres)"},
//{0x63,6,215,1,-1,"I/U EEPROM (11ème chiffres)"},
//{0x63,7,214,1,-1,"I/U EEPROM (12ème  chiffres)(rev.)"},
//{0x64,0,307,1,-1,"Activer/Désactiver les données"},
//{0x64,1,152,1,-1,"Adresse d unité intérieure"},
//{0x64,2,316,1,-1,"Mode de fonctionnement hybride"},
//{0x64,2,303,1,-1,"Demande de fonctionnement de chaudière"},
//{0x64,2,302,1,-1,"Demande DHW chaudière"},
//{0x64,2,301,1,-1,"Sortie de vanne de dérivation"},
//{0x64,3,105,2,-1,"BE_COP"},
//{0x64,5,105,2,1,"Temp. cible de chauffage hybride"},
//{0x64,7,105,2,1,"Temp. cible de chauffage de chaudière"},
//{0x00,0,996,0,-1,"Override All Clear"}
};