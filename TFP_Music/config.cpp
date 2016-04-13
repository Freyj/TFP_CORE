class CfgPatches {
	class TFP_Music {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR"};
		version = 3.3
		author[] = {"Heartbroken"};
	};
};

class CfgMusic 
{
	class AEGIS_01
		{
		name="(TFP) 01 Operation GRIEVING PROMETHEUS";
		sound[]={"\TFP_Music\01_Op�ration_GRIEVING_PROMETHEUS.ogg",1,1};
		duration = 63;
		theme = "safe";
		};

	class AEGIS_02
		{
		name="(TFP) 02 Theme du 1st AEGIS";
		sound[]={"\TFP_Music\02_Th�me_du_1st_AEGIS.ogg",1,1};
		duration = 260;
		theme = "safe";
		};

	class AEGIS_03
		{
		name="(TFP) 03 Theme du 2nd AEGIS";
		sound[]={"\TFP_Music\03_Th�me_du_2nd_AEGIS.ogg",1,1};
		duration = 200;
		theme = "safe";
		};

	class AEGIS_04
		{
		name="(TFP) 04 Marche de l'AAF";
		sound[]={"\TFP_Music\04_Marche_de_l'AAF.ogg",1,1};
		duration = 180;
		theme = "safe";
		};

	class AEGIS_05
		{
		name="(TFP) 05 Fiers Liberateurs, Freles Envahisseurs (Theme de l'OTAN)";
		sound[]={"\TFP_Music\05_Fiers_Lib�rateurs_Fr�les_Envahisseurs_Th�me_de_l'OTAN.ogg",1,1};
		duration = 163;
		theme = "safe";
		};

	class AEGIS_06
		{
		name="(TFP) 06 Occupation Militaire (Theme de la CSAT)";
		sound[]={"\TFP_Music\06_Occupation_Militaire_Th�me_de_la_CSAT.ogg",1,1};
		duration = 90;
		theme = "safe";
		};

	class AEGIS_07
		{
		name="(TFP) 07 Cavalerie Blindee a l'Avant";
		sound[]={"\TFP_Music\07_Cavalerie_Blind�e_�_l'Avant.ogg",1,1};
		duration = 79;
		theme = "safe";
		};

	class AEGIS_08
		{
		name="(TFP) 08 Contre-Attaque Interarmes";
		sound[]={"\TFP_Music\08_Contre-Attaque_Interarmes.ogg",1,1};
		duration = 284;
		theme = "safe";
		};

	class AEGIS_09
		{
		name="(TFP) 09 Requiem pour la 1st Recon";
		sound[]={"\TFP_Music\09_Requiem_pour_la_1st_Recon.ogg",1,1};
		duration = 417;
		theme = "safe";
		};

	class AEGIS_10
		{
		name="(TFP) 10 Civils en Detresse";
		sound[]={"\TFP_Music\10_Civils_en_D�tresse.ogg",1,1};
		duration = 104;
		theme = "safe";
		};

	class AEGIS_11
		{
		name="(TFP) 11 Reveil en Terres Desolees";
		sound[]={"\TFP_Music\11_R�veil_en_Terres_D�sol�es.ogg",1,1};
		duration = 193;
		theme = "safe";
		};

	class AEGIS_12
		{
		name="(TFP) 12 Vengeance Populaire (Theme de la FIA)";
		sound[]={"\TFP_Music\12_Vengeance_Populaire_Th�me_de_la_FIA.ogg",1,1};
		duration = 156;
		};

	class AEGIS_13
		{
		name="(TFP) 13 Derriere les Lignes Ennemies";
		sound[]={"\TFP_Music\13_Derri�re_les_Lignes_Ennemies.ogg",1,1};
		duration = 88;
		theme = "safe";
		};

	class AEGIS_14
		{
		name="(TFP) 14 Officier Rens.";
		sound[]={"\TFP_Music\14_Officier_Rens.ogg",1,1};
		duration = 127;
		theme = "safe";
		};

	class AEGIS_15
		{
		name="(TFP) 15 H-5 Minutes";
		sound[]={"\TFP_Music\15_H-5_Minutes.ogg",1,1};
		duration = 62;
		theme = "safe";
		};

	class AEGIS_16
		{
		name="(TFP) 16 Menace pour la Paix";
		sound[]={"\TFP_Music\16_Menace_pour_la_Paix.ogg",1,1};
		duration = 176;
		theme = "safe";
		};

	class AEGIS_17
		{
		name="(TFP) 17 Nouvellement Promu";
		sound[]={"\TFP_Music\17_Nouvellement_Promu.ogg",1,1};
		duration = 68;
		theme = "safe";
		};

	class AEGIS_18
		{
		name="(TFP) 18 Futur Incertain";
		sound[]={"\TFP_Music\18_Futur_Incertain.ogg",1,1};
		duration = 131;
		theme = "safe";
		};

	class AEGIS_19
		{
		name="(TFP) 19 Intervention Desesperee";
		sound[]={"\TFP_Music\19_Intervention_D�sesp�r�e.ogg",1,1};
		duration = 137;
		theme = "safe";
		};

	class AEGIS_20
		{
		name="(TFP) 20 Heros Malgre Eux";
		sound[]={"\TFP_Music\20_H�ros_Malgr�_Eux.ogg",1,1};
		duration = 134;
		theme = "safe";
		};

	class AEGIS_21
		{
		name="(TFP) 21 Bottage de Culs (Victoire)";
		sound[]={"\TFP_Music\21_Bottage_de_Culs_Victoire.ogg",1,1};
		duration = 250;
		theme = "safe";
		};
	
	class AEGIS_22
		{
		name="(TFP) 22 Retraite Precipitee (Defaite)";
		sound[]={"\TFP_Music\22_Retraite_Pr�cipit�e_D�faite.ogg",1,1};
		duration = 187;
		theme = "safe";
		};
	class TFP_Music_01 //D�but des modifs/doublons li�s � V2.0
		{
		name="(TFP) Band of Brothers Theme";
		sound[]={"\TFP_Music\Band_Of_Brothers_Theme.ogg",1,1};
		duration = 556;
		theme = "safe";
		};
	class TFP_Music_02
		{
		name="(TFP) Black Hawk Down - Barra Barra";
		sound[]={"\TFP_Music\Black_Hawk_Down-Barra_Barra.ogg",1,1};
		duration = 347;
		theme = "safe";
		};
	class TFP_Music_03
		{
		name="(TFP) Black Hawk Down - Gortoz a Ran J'Attends";
		sound[]={"\TFP_Music\Black_Hawk_Down-Gortoz_a_Ran_J'Attends.ogg",1,1};
		duration = 348;
		theme = "safe";
		};
	class TFP_Music_04
		{
		name="(TFP) C&C Generals - USA Soundtrack #10";
		sound[]={"\TFP_Music\C&C_Generals-USA_Soundtrack#10.ogg",1,1};
		duration = 196;
		theme = "safe";
		};
	class TFP_Music_05
		{
		name="(TFP) C&C Generals - USA Soundtrack #11";
		sound[]={"\TFP_Music\C&C_Generals-USA_Soundtrack#11.ogg",1,1};
		duration = 191;
		theme = "safe";
		};
	class TFP_Music_06
		{
		name="(TFP) RUS - Hymne de la Federation de Russie";
		sound[]={"\TFP_Music\Hymne_de_la_F�d�ration_de_Russie.ogg",1,1};
		duration = 94;
		theme = "safe";
		};
	class TFP_Music_07
		{
		name="(TFP) RUS - Katioucha";
		sound[]={"\TFP_Music\Katioucha.ogg",1,1};
		duration = 125;
		theme = "safe";
		};
	class TFP_Music_08
		{
		name="(TFP) La Grande Evasion";
		sound[]={"\TFP_Music\La_Grande_�vasion.ogg",1,1};
		duration = 122;
		theme = "safe";
		};
	class TFP_Music_09
		{
		name="(TFP) RUS - Les Sources";
		sound[]={"\TFP_Music\Les_Sources.ogg",1,1};
		duration = 196;
		theme = "safe";
		};
	class TFP_Music_10
		{
		name="(TFP) RUS - L'Internationale";
		sound[]={"\TFP_Music\L'Internationale.ogg",1,1};
		duration = 242;
		theme = "safe";
		};
	class TFP_Music_11
		{
		name="(TFP) Martial Law";
		sound[]={"\TFP_Music\Martial_Law.ogg",1,1};
		duration = 112;
		theme = "safe";
		};
	class TFP_Music_12 //Musique "Bonus"
		{
		name="(TFP) BONUS - On va s'aimer";
		sound[]={"\TFP_Music\On_va_s'aimer.ogg",1,1};
		duration = 242;
		theme = "safe";
		};
	class TFP_Music_13
		{
		name="(TFP) Paint it Black";
		sound[]={"\TFP_Music\Paint_it_Black.ogg",1,1};
		duration = 228;
		theme = "safe";
		};
	class TFP_Music_14
		{
		name="(TFP) Adagio pour cordes";
		sound[]={"\TFP_Music\Samuel_Barber-Adagio_for_Strings.ogg",1,1};
		duration = 482;
		theme = "safe";
		};
	class TFP_Music_15
		{
		name="(TFP) Storming New Caprica";
		sound[]={"\TFP_Music\Storming_New_Caprica.ogg",1,1};
		duration = 470;
		theme = "safe";
		};
	class TFP_Music_16
		{
		name="(TFP) The Pacific - Honor (For Oboe And Strings)";
		sound[]={"\TFP_Music\The_Pacific-Honor(For_Oboe_And_Strings).ogg",1,1};
		duration = 179;
		theme = "safe";
		};
	class TFP_Music_17 //Release 3
		{
		name="(TFP) 08 - Starship Phoenix";
		sound[]={"\TFP_Music\08-Starship_Phoenix.ogg",1,1};
		duration = 258;
		theme = "safe";
		};
	class TFP_Music_18 
		{
		name="(TFP) 09 - Maktar Nebula - Boss Battle";
		sound[]={"\TFP_Music\09-Maktar_Nebula-Boss_Battle.ogg",1,1};
		duration = 247;
		theme = "safe";
		};
	class TFP_Music_19 
		{
		name="(TFP) 12 - Marcadia - Laser Defense Facility";
		sound[]={"\TFP_Music\12-Marcadia-Laser_Defense_Facility.ogg",1,1};
		duration = 273;
		theme = "safe";
		};
	class TFP_Music_20
		{
		name="(TFP) 18 - Felzin System - Thug Rendezvous";
		sound[]={"\TFP_Music\18-Felzin_System-Thug_Rendezvous.ogg",1,1};
		duration = 250;
		theme = "safe";
		};
	class TFP_Music_21
		{
		name="(TFP) 24 - Tabora - Crystal Desert";
		sound[]={"\TFP_Music\24-Tabora-Crystal_Desert.ogg",1,1};
		duration = 266;
		theme = "safe";
		};
	class TFP_Music_22
		{
		name="(TFP) 49 - Zeldrin - Crash Site";
		sound[]={"\TFP_Music\49-Zeldrin-Crash_Site.ogg",1,1};
		duration = 255;
		theme = "safe";
		};
	class TFP_Music_23
		{
		name="(TFP) 54 - Starship Phoenix Under Attack";
		sound[]={"\TFP_Music\54-Starship_Phoenix_Under_Attack.ogg",1,1};
		duration = 274;
		theme = "safe";
		};
	class TFP_Music_24
		{
		name="(TFP) Pompe et Circonstance - Marche 1";
		sound[]={"\TFP_Music\elgar_pomp_and_circumstance_march_1.ogg",1,1};
		duration = 373;
		theme = "safe";
		};
	class TFP_Music_25
		{
		name="(TFP) La chevauchee des Walkyries";
		sound[]={"\TFP_Music\wagner_ride_of_the_valkyries.ogg",1,1};
		duration = 320;
		theme = "safe";
		};
	class TFP_Music_26 //Release 4
		{
		name="(TFP) 07. Storm Is Coming";
		sound[]={"\TFP_Music\07.StormIsComing-MadMaxFuryRoad.ogg",1,1};
		duration = 365;
		theme = "safe";
		};
	class TFP_Music_27
		{
		name="(TFP) 12. Brothers In Arms";
		sound[]={"\TFP_Music\12.BrothersInArms-MadMaxFuryRoad.ogg",1,1};
		duration = 336;
		theme = "safe";
		};
	class TFP_Music_28
		{
		name="(TFP) The Man Comes Around";
		sound[]={"\TFP_Music\TheManComesAround-JohnnyCash.ogg",1,1};
		duration = 247;
		theme = "safe";
		};
	class TFP_Music_29
		{
		name="(TFP) God's Gonna Cut You Down";
		sound[]={"\TFP_Music\GodsGonnaCutYouDown-JohnnyCash.ogg",1,1};
		duration = 159;
		theme = "safe";
		};
	class TFP_Music_30
		{
		name="(TFP) Solitary Man";
		sound[]={"\TFP_Music\SolitaryMan-JohhnyCash.ogg",1,1};
		duration = 143;
		theme = "safe";
		};
	class TFP_Music_31
		{
		name="(TFP) Time To Say Good Bye - Hope";
		sound[]={"\TFP_Music\TimeToSayGoodbye-Hope.ogg",1,1};
		duration = 187;
		theme = "safe";
		};
	class TFP_Music_32
		{
		name="(TFP) The Sound of Silence - Nouela";
		sound[]={"\TFP_Music\TheSoundofSilence-Nouela.ogg",1,1};
		duration = 201;
		theme = "safe";
		};
	class TFP_Music_33
		{
		name="(TFP) 3.1415...";
		sound[]={"\TFP_Music\3.1415...-POI.ogg",1,1};
		duration = 77;
		theme = "safe";
		};
	class TFP_Music_34
		{
		name="(TFP) God Mode";
		sound[]={"\TFP_Music\GodMode-POI.ogg",1,1};
		duration = 461;
		theme = "safe";
		};
	class TFP_Music_35
		{
		name="(TFP) Threat to National Security";
		sound[]={"\TFP_Music\ThreattoNationalSecurity-POI.ogg",1,1};
		duration = 142;
		theme = "safe";
		};
	class TFP_Music_36
		{
		name="(TFP) The Wasteland";
		sound[]={"\TFP_Music\TheWasteland.ogg",1,1};
		duration = 328;
		theme = "safe";
		};
	class TFP_Music_37 //Release 4.1
		{
		name="(TFP) Au Drapeau + Refrain Marseillaise";
		sound[]={"\TFP_Music\Au_Drapeau.ogg",1,1};
		duration = 46;
		theme = "safe";
		};
	class TFP_Music_38
		{
		name="(TFP) Aux Morts";
		sound[]={"\TFP_Music\Aux_morts.ogg",1,1};
		duration = 51;
		theme = "safe";
		};
	class TFP_Music_39
		{
		name="(TFP) Garde a vous";
		sound[]={"\TFP_Music\Garde-�-vous.ogg",1,1};
		duration = 12;
		theme = "safe";
		};
	class TFP_Music_40
		{
		name="(TFP) Hymne Europeen";
		sound[]={"\TFP_Music\Hymne_Europ�en.ogg",1,1};
		duration = 79;
		theme = "safe";
		};
	class TFP_Music_41
		{
		name="(TFP) Ouvrez le Ban";
		sound[]={"\TFP_Music\Le_Ban.ogg",1,1};
		duration = 12;
		theme = "safe";
		};
	class TFP_Music_42
		{
		name="(TFP) La Marseillaise";
		sound[]={"\TFP_Music\Marseillaise.ogg",1,1};
		duration = 64;
		theme = "safe";
		};
	class TFP_Music_43
		{
		name="(TFP) Fallout 4 - Main Theme";
		sound[]={"\TFP_Music\Fallout4-Main_Theme.ogg",1,1};
		duration = 182;
		theme = "safe";
		};
	class TFP_Music_44 //Release 4.2
		{
		name="(TFP) General Quarters";
		sound[]={"\TFP_Music\GeneralQuarters.ogg",1,1};
		duration = 108;
		theme = "safe";
		};
	class TFP_Music_45
		{
		name="(TFP) Operation Pearl Harbor";
		sound[]={"\TFP_Music\OperationPearlHarbor.ogg",1,1};
		duration = 59;
		theme = "safe";
		};
	class TFP_Music_46
		{
		name="(TFP) The Admirals Arrive";
		sound[]={"\TFP_Music\TheAdmiralsArrive.ogg",1,1};
		duration = 90;
		theme = "safe";
		};
	class TFP_Music_47
		{
		name="(TFP) Ready For Battle (Choose Squad)";
		sound[]={"\TFP_Music\ready-for-battle(choose-squad).ogg",1,1};
		duration = 80;
		theme = "safe";
		};
	class TFP_Music_48
		{
		name="(TFP) Vigilo Confido";
		sound[]={"\TFP_Music\vigilo-confido.ogg",1,1};
		duration = 80;
		theme = "safe";
		};
	class TFP_Music_49
		{
		name="(TFP) Resilience Of Man";
		sound[]={"\TFP_Music\resilience-of-man.ogg",1,1};
		duration = 66;
		theme = "safe";
		};
	class TFP_Music_50
		{
		name="(TFP) Kanochi nite ~ Main Theme";
		sound[]={"\TFP_Music\Kanochi-nite~MainTheme.ogg",1,1};
		duration = 244;
		theme = "safe";
		};
	class TFP_Music_51
		{
		name="(TFP) Jieitai Shutsudou!";
		sound[]={"\TFP_Music\JieitaiShutsudou!.ogg",1,1};
		duration = 128;
		theme = "safe";
		};
	class TFP_Music_52 //Release 4.3
		{
		name="(TFP) First Flight";
		sound[]={"\TFP_Music\02-FirstFlight.ogg",1,1};
		duration = 82;
		theme = "safe";
		};
	class TFP_Music_53
		{
		name="(TFP) Squad Loadout";
		sound[]={"\TFP_Music\08-SquadLoadout.ogg",1,1};
		duration = 143;
		theme = "safe";
		};
	class TFP_Music_54
		{
		name="(TFP) Retaliation";
		sound[]={"\TFP_Music\10-Retaliation.ogg",1,1};
		duration = 117;
		theme = "safe";
		};
	class TFP_Music_55
		{
		name="(TFP) A Theme for Kjell";
		sound[]={"\TFP_Music\06_A_Theme_for_Kjell.ogg",1,1};
		duration = 217;
		theme = "safe";
		};
	class TFP_Music_56 //Musique "BONUS"
		{
		name="(TFP) BONUS - Give It Up";
		sound[]={"\TFP_Music\Give_It_Up-KC&The SunshineBand.ogg",1,1};
		duration = 245;
		theme = "safe";
		};
	class TFP_Music_57
		{
		name="(TFP) Battle Hymn of the Republic";
		sound[]={"\TFP_Music\03_Battle_Hymn_of_the_Republic.ogg",1,1};
		duration = 91;
		theme = "safe";
		};
	class TFP_Music_58
		{
		name="(TFP) Ember ~Flareon~";
		sound[]={"\TFP_Music\05-Ember~Flareon~.ogg",1,1};
		duration = 220;
		theme = "safe";
		};
	class TFP_Music_59
		{
		name="(TFP) Sentou 'Mirai'";
		sound[]={"\TFP_Music\35-Sentou'Mirai'.ogg",1,1};
		duration = 231;
		theme = "safe";
		};
};