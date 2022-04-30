class QGAAFTest {
    class AllUnits {
        uniform = "";
        vest = "";
        backpack = "";
        headgear = "";
        primaryWeapon = "";
        primaryWeaponMagazine = "";
        primaryWeaponMuzzle = "";
        primaryWeaponOptics = "";
        primaryWeaponPointer = "";
        primaryWeaponUnderbarrel = "";
        primaryWeaponUnderbarrelMagazine = "";
        secondaryWeapon = "";
        secondaryWeaponMagazine = "";
        secondaryWeaponMuzzle = "";
        secondaryWeaponOptics = "";
        secondaryWeaponPointer = "";
        secondaryWeaponUnderbarrel = "";
        secondaryWeaponUnderbarrelMagazine = "";
        handgunWeapon = "";
        handgunWeaponMagazine = "";
        handgunWeaponMuzzle = "";
        handgunWeaponOptics = "";
        handgunWeaponPointer = "";
        handgunWeaponUnderbarrel = "";
        handgunWeaponUnderbarrelMagazine = "";
        goggles = "";
        nvgoggles = "";
        binoculars = "";
        map = "";
        gps = "";
        compass = "";
        watch = "";
        radio = "";
    };
    class Type {
        class medic_F {
            uniform = "UK3CB_AAF_B_U_CombatUniform_DIGI_GRN";
            vest = "UK3CB_AAF_O_V_Eagle_MED_DIGI_GRN";
            backpack = "grad_extras_kit_kitbag_sgg_medic";
            headgear = "UK3CB_AAF_B_H_PASGT_DIGI_GRN";
            primaryWeapon = "arifle_SLR_V_lxWS";
            primaryWeaponMagazine = "20Rnd_762x51_slr_lxWS";
            binoculars = "gm_ferod16_oli";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "ItemGPS";
            radio = "TFAR_anprc154";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_1("ACE_EntrenchingTool"),
                LIST_3("ACE_epinephrine"),
                LIST_1("ACE_MapTools"),
                LIST_3("ACE_morphine"),
                LIST_4("ACE_tourniquet"),
                LIST_8("ACE_quikclot"),
                LIST_8("ACE_packingBandage"),
                LIST_1("ACE_CableTie")
            };
            addItemsToVest[] = {
                LIST_1("ACE_Canteen_Half"),
                LIST_10("ACE_quikclot"),
                LIST_10("ACE_packingBandage"),
                LIST_4("ACE_epinephrine"),
                LIST_4("ACE_morphine"),
                LIST_4("ACE_tourniquet"),
                LIST_6("20Rnd_762x51_slr_lxWS"),
                LIST_2("gm_handgrenade_frag_dm51a1"),
                LIST_4("gm_smokeshell_wht_dm25"),
                LIST_2("gm_smokeshell_grn_dm21")
            };
            addItemsToBackpack[] = {
                LIST_30("ACE_quikclot"),
                LIST_30("ACE_packingBandage"),
                LIST_20("ACE_elasticBandage"),
                LIST_20("ACE_epinephrine"),
                LIST_20("ACE_morphine"),
                LIST_10("ACE_splint"),
                LIST_20("ACE_tourniquet"),
                LIST_5("ACE_salineIV"),
                LIST_5("ACE_salineIV_500")
            };
        };
        class Soldier_SL_F {
            uniform = "UK3CB_AAF_B_U_CombatUniform_DIGI_GRN";
            vest = "V_PlateCarrierIA2_dgtl";
            backpack = "UK3CB_AAF_B_B_FIELDPACK_DIGI_GRN";
            headgear = "UK3CB_AAF_B_H_PASGT_DIGI_GRN";
            primaryWeapon = "gm_c7a1_blk";
            primaryWeaponMagazine = "gm_30Rnd_556x45mm_B_M855_stanag_gry";
            primaryWeaponOptics = "gm_c79a1_blk";
            handgunWeapon = "rhsusf_weap_m9";
            handgunWeaponMagazine = "rhsusf_mag_15Rnd_9x19_FMJ";
            binoculars = "ACE_Vector";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "ItemGPS";
            radio = "TFAR_anprc154";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_1("ACE_EntrenchingTool"),
                LIST_3("ACE_epinephrine"),
                LIST_1("ACE_MapTools"),
                LIST_3("ACE_morphine"),
                LIST_4("ACE_tourniquet"),
                LIST_8("ACE_quikclot"),
                LIST_8("ACE_packingBandage"),
                LIST_1("ACE_CableTie")
            };
            addItemsToVest[] = {
                LIST_1("ACE_Canteen_Half"),
                LIST_1("gm_handgrenade_frag_dm51a1"),
                LIST_2("gm_smokeshell_wht_dm25"),
                LIST_6("gm_30Rnd_556x45mm_B_M855_stanag_gry"),
                LIST_2("rhsusf_mag_15Rnd_9x19_FMJ")
            };
            addItemsToBackpack[] = {
                LIST_1("ACE_microDAGR"),
                LIST_2("gm_30Rnd_556x45mm_B_M855_stanag_gry"),
                LIST_2("gm_smokeshell_red_dm23"),
                LIST_2("gm_smokeshell_grn_dm21"),
                LIST_2("gm_smokeshell_org_dm32")
            };
        };
        class Soldier_TL_F {
            uniform = "UK3CB_AAF_B_U_CombatUniform_DIGI_GRN";
            vest = "V_PlateCarrierIA2_dgtl";
            backpack = "UK3CB_AAF_B_B_FIELDPACK_DIGI_GRN";
            headgear = "UK3CB_AAF_B_H_PASGT_DIGI_GRN";
            primaryWeapon = "gm_c7a1_blk";
            primaryWeaponMagazine = "gm_30Rnd_556x45mm_B_M855_stanag_gry";
            primaryWeaponOptics = "gm_c79a1_blk";
            handgunWeapon = "rhsusf_weap_m9";
            handgunWeaponMagazine = "rhsusf_mag_15Rnd_9x19_FMJ";
            binoculars = "gm_ferod16_oli";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "ItemGPS";
            radio = "TFAR_anprc154";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_1("ACE_EntrenchingTool"),
                LIST_3("ACE_epinephrine"),
                LIST_1("ACE_MapTools"),
                LIST_3("ACE_morphine"),
                LIST_4("ACE_tourniquet"),
                LIST_8("ACE_quikclot"),
                LIST_8("ACE_packingBandage"),
                LIST_1("ACE_CableTie")
            };
            addItemsToVest[] = {
                LIST_1("ACE_Canteen_Half"),
                LIST_1("gm_handgrenade_frag_dm51a1"),
                LIST_2("gm_smokeshell_wht_dm25"),
                LIST_6("gm_30Rnd_556x45mm_B_M855_stanag_gry"),
                LIST_2("rhsusf_mag_15Rnd_9x19_FMJ")
            };
            addItemsToBackpack[] = {
                LIST_3("gm_30Rnd_556x45mm_B_M855_stanag_gry"),
                LIST_2("gm_smokeshell_red_dm23"),
                LIST_2("gm_smokeshell_grn_dm21"),
                LIST_2("gm_smokeshell_wht_dm25"),
                LIST_2("gm_smokeshell_org_dm32"),
                LIST_2("gm_handgrenade_frag_dm51a1"),
                LIST_1("gm_120Rnd_762x51mm_B_T_DM21A2_mg3_grn")
            };
        };
        class Soldier_AR_F {
            uniform = "UK3CB_AAF_B_U_CombatUniform_DIGI_GRN";
            vest = "V_PlateCarrierIA2_dgtl";
            backpack = "rhssaf_kitbag_digital";
            headgear = "UK3CB_AAF_B_H_PASGT_DIGI_GRN";
            primaryWeapon = "gm_mg3_blk";
            primaryWeaponMagazine = "gm_120Rnd_762x51mm_B_T_DM21A2_mg3_grn";
            handgunWeapon = "rhsusf_weap_m9";
            handgunWeaponMagazine = "rhsusf_mag_15Rnd_9x19_FMJ";
            binoculars = "gm_ferod16_oli";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "ItemGPS";
            radio = "TFAR_anprc154";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_1("ACE_EntrenchingTool"),
                LIST_3("ACE_epinephrine"),
                LIST_1("ACE_MapTools"),
                LIST_3("ACE_morphine"),
                LIST_4("ACE_tourniquet"),
                LIST_8("ACE_quikclot"),
                LIST_8("ACE_packingBandage"),
                LIST_1("ACE_CableTie")
            };
            addItemsToVest[] = {
                LIST_1("ACE_Canteen_Half"),
                LIST_2("gm_smokeshell_wht_dm25"),
                LIST_1("gm_120Rnd_762x51mm_B_T_DM21A2_mg3_grn"),
                LIST_2("rhsusf_mag_15Rnd_9x19_FMJ"),
                LIST_1("gm_handgrenade_frag_dm51a1")
            };
            addItemsToBackpack[] = {
                LIST_2("gm_120Rnd_762x51mm_B_T_DM21A2_mg3_grn")
            };
        };
        class Soldier_AAR_F {
            uniform = "UK3CB_AAF_B_U_CombatUniform_DIGI_GRN";
            vest = "V_PlateCarrierIA1_dgtl";
            backpack = "rhssaf_kitbag_digital";
            headgear = "UK3CB_AAF_B_H_PASGT_DIGI_GRN";
            primaryWeapon = "arifle_SLR_V_lxWS";
            primaryWeaponMagazine = "20Rnd_762x51_slr_lxWS";
            binoculars = "gm_ferod16_oli";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "ItemGPS";
            radio = "TFAR_anprc154";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_1("ACE_EntrenchingTool"),
                LIST_3("ACE_epinephrine"),
                LIST_1("ACE_MapTools"),
                LIST_3("ACE_morphine"),
                LIST_4("ACE_tourniquet"),
                LIST_8("ACE_quikclot"),
                LIST_8("ACE_packingBandage"),
                LIST_1("ACE_CableTie")
            };
            addItemsToVest[] = {
                LIST_1("ACE_Canteen_Half"),
                LIST_6("20Rnd_762x51_slr_lxWS"),
                LIST_2("gm_handgrenade_frag_dm51a1"),
                LIST_1("gm_handgrenade_conc_dm51a1"),
                LIST_2("gm_smokeshell_wht_dm25")
            };
            addItemsToBackpack[] = {
                LIST_1("ACE_SpareBarrel"),
                LIST_3("gm_120Rnd_762x51mm_B_T_DM21A2_mg3_grn")
            };
        };
        class Soldier_GL_F {
            uniform = "UK3CB_AAF_B_U_CombatUniform_DIGI_GRN";
            vest = "V_PlateCarrierIAGL_dgtl";
            backpack = "rhssaf_kitbag_digital";
            headgear = "UK3CB_AAF_B_H_PASGT_DIGI_GRN";
            primaryWeapon = "arifle_SLR_V_GL_lxWS";
            primaryWeaponMagazine = "20Rnd_762x51_slr_lxWS";
            primaryWeaponUnderbarrelMagazine = "1Rnd_40mm_HE_lxWS";
            handgunWeapon = "rhsusf_weap_m9";
            handgunWeaponMagazine = "rhsusf_mag_15Rnd_9x19_FMJ";
            binoculars = "gm_ferod16_oli";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "ItemGPS";
            radio = "TFAR_anprc154";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_1("ACE_EntrenchingTool"),
                LIST_3("ACE_epinephrine"),
                LIST_1("ACE_MapTools"),
                LIST_3("ACE_morphine"),
                LIST_4("ACE_tourniquet"),
                LIST_8("ACE_quikclot"),
                LIST_8("ACE_packingBandage"),
                LIST_1("ACE_CableTie")
            };
            addItemsToVest[] = {
                LIST_1("ACE_Canteen_Half"),
                LIST_2("gm_smokeshell_wht_dm25"),
                LIST_6("20Rnd_762x51_slr_lxWS"),
                LIST_1("gm_handgrenade_frag_dm51a1"),
                LIST_2("rhsusf_mag_15Rnd_9x19_FMJ")
            };
            addItemsToBackpack[] = {
                LIST_4("1Rnd_58mm_AT_lxWS"),
                LIST_8("1Rnd_50mm_Smoke_lxWS"),
                LIST_12("1Rnd_40mm_HE_lxWS")
            };
        };
        class Soldier_AT_F {
            uniform = "UK3CB_AAF_B_U_CombatUniform_DIGI_GRN";
            vest = "V_PlateCarrierIA1_dgtl";
            backpack = "rhssaf_kitbag_digital";
            headgear = "UK3CB_AAF_B_H_PASGT_DIGI_GRN";
            primaryWeapon = "gm_c7a1_blk";
            primaryWeaponMagazine = "gm_30Rnd_556x45mm_B_M855_stanag_gry";
            primaryWeaponOptics = "gm_c79a1_blk";
            secondaryWeapon = "launch_O_Vorona_green_F";
            secondaryWeaponMagazine = "Vorona_HEAT";
            binoculars = "gm_ferod16_oli";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "ItemGPS";
            radio = "TFAR_anprc154";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_1("ACE_EntrenchingTool"),
                LIST_3("ACE_epinephrine"),
                LIST_1("ACE_MapTools"),
                LIST_3("ACE_morphine"),
                LIST_4("ACE_tourniquet"),
                LIST_8("ACE_quikclot"),
                LIST_8("ACE_packingBandage"),
                LIST_1("ACE_CableTie")
            };
            addItemsToVest[] = {
                LIST_1("ACE_Canteen_Half"),
                LIST_2("gm_smokeshell_wht_dm25"),
                LIST_8("gm_30Rnd_556x45mm_B_M855_stanag_gry")
            };
            addItemsToBackpack[] = {
                LIST_1("Vorona_HEAT")
            };
        };
        class Soldier_AAT_F {
            uniform = "UK3CB_AAF_B_U_CombatUniform_DIGI_GRN";
            vest = "V_PlateCarrierIA2_dgtl";
            backpack = "UK3CB_AAF_B_B_CARRYALL_DIGI_GRN";
            headgear = "UK3CB_AAF_B_H_PASGT_DIGI_GRN";
            primaryWeapon = "gm_c7a1_blk";
            primaryWeaponMagazine = "gm_30Rnd_556x45mm_B_M855_stanag_gry";
            primaryWeaponOptics = "gm_c79a1_blk";
            handgunWeapon = "rhsusf_weap_m9";
            handgunWeaponMagazine = "rhsusf_mag_15Rnd_9x19_FMJ";
            binoculars = "gm_ferod16_oli";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "ItemGPS";
            radio = "TFAR_anprc154";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_1("ACE_EntrenchingTool"),
                LIST_3("ACE_epinephrine"),
                LIST_1("ACE_MapTools"),
                LIST_3("ACE_morphine"),
                LIST_4("ACE_tourniquet"),
                LIST_8("ACE_quikclot"),
                LIST_8("ACE_packingBandage"),
                LIST_1("ACE_CableTie")
            };
            addItemsToVest[] = {
                LIST_1("ACE_Canteen_Half"),
                LIST_2("gm_smokeshell_wht_dm25"),
                LIST_7("gm_30Rnd_556x45mm_B_M855_stanag_gry"),
                LIST_2("rhsusf_mag_15Rnd_9x19_FMJ")
            };
            addItemsToBackpack[] = {
                LIST_3("Vorona_HEAT")
            };
        };
        class spotter_F {
            uniform = "U_I_L_Uniform_01_tshirt_olive_F";
            vest = "V_HarnessO_ghex_F";
            backpack = "B_RadioBag_01_eaf_F";
            headgear = "H_MilCap_taiga";
            primaryWeapon = "srifle_DMR_06_hunter_F";
            primaryWeaponMagazine = "10Rnd_Mk14_762x51_Mag";
            primaryWeaponOptics = "ACE_optic_MRCO_2D";
            primaryWeaponUnderbarrel = "bipod_02_F_blk";
            secondaryWeapon = "gm_m72a3_oli";
            secondaryWeaponMagazine = "gm_1Rnd_66mm_heat_m72a3";
            binoculars = "ACE_Vector";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "C_UavTerminal";
            radio = "TFAR_anprc148jem";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_1("ACE_EntrenchingTool"),
                LIST_3("ACE_epinephrine"),
                LIST_1("ACE_MapTools"),
                LIST_3("ACE_morphine"),
                LIST_4("ACE_tourniquet"),
                LIST_8("ACE_quikclot"),
                LIST_8("ACE_packingBandage"),
                LIST_1("ACE_CableTie"),
                LIST_1("ACE_microDAGR")
            };
            addItemsToVest[] = {
                LIST_1("ACE_ATragMX"),
                LIST_1("ACE_Kestrel4500"),
                LIST_1("ACE_microDAGR"),
                LIST_1("ACE_RangeCard"),
                LIST_2("ACE_tourniquet"),
                LIST_2("ACE_splint"),
                LIST_2("ACE_Sandbag_empty"),
                LIST_12("10Rnd_Mk14_762x51_Mag"),
                LIST_2("gm_smokeshell_wht_dm25"),
                LIST_1("gm_smokeshell_grn_dm21"),
                LIST_1("gm_smokeshell_red_dm23"),
                LIST_2("gm_handgrenade_frag_dm51a1")
            };
            addItemsToBackpack[] = {
                LIST_4("10Rnd_Mk14_762x51_Mag"),
                LIST_2("ClaymoreDirectionalMine_Remote_Mag"),
                LIST_1("rhs_ec200_mag")
            };
        };
        class sniper_F {
            uniform = "U_BG_Guerilla3_1";
            vest = "V_Rangemaster_belt";
            backpack = "B_LegStrapBag_olive_F";
            headgear = "H_Booniehat_dgtl";
            primaryWeapon = "UK3CB_Enfield_Rail";
            primaryWeaponMagazine = "UK3CB_Enfield_10rnd_Mag";
            primaryWeaponOptics = "optic_KHS_old";
            primaryWeaponUnderbarrel = "rhsusf_acc_harris_swivel";
            handgunWeapon = "hgun_Pistol_01_F";
            handgunWeaponMagazine = "10Rnd_9x21_Mag";
            binoculars = "gm_ferod16_oli";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "ItemGPS";
            radio = "TFAR_anprc148jem";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_1("ACE_EntrenchingTool"),
                LIST_3("ACE_epinephrine"),
                LIST_1("ACE_MapTools"),
                LIST_3("ACE_morphine"),
                LIST_4("ACE_tourniquet"),
                LIST_8("ACE_quikclot"),
                LIST_8("ACE_packingBandage"),
                LIST_1("ACE_CableTie"),
                LIST_1("ACE_Canteen"),
                LIST_1("ACE_microDAGR")
            };
            addItemsToVest[] = {
                LIST_4("10Rnd_9x21_Mag"),
                LIST_14("UK3CB_Enfield_10rnd_Mag")
            };
            addItemsToBackpack[] = {
                LIST_8("ACE_quikclot"),
                LIST_8("ACE_packingBandage"),
                LIST_1("ACE_ATragMX"),
                LIST_1("ACE_Kestrel4500"),
                LIST_1("ACE_RangeCard"),
                LIST_1("ACE_Tripod"),
                LIST_2("ACE_tourniquet"),
                LIST_2("ACE_morphine"),
                LIST_2("ACE_epinephrine")
            };
        };
        class officer_F {
            uniform = "U_I_OfficerUniform";
            vest = "UK3CB_AAF_B_V_TacVest_DIGI_GRN";
            backpack = "";
            headgear = "UK3CB_AAF_B_H_Beret_Army_Off";
            primaryWeapon = "gm_c7a1_blk";
            primaryWeaponMagazine = "gm_30Rnd_556x45mm_B_M855_stanag_gry";
            primaryWeaponOptics = "gm_c79a1_blk";
            binoculars = "ACE_Vector";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "ItemGPS";
            radio = "TFAR_anprc154";
            nvgoggles = "immersion_cigs_cigar0_nv";
            addItemsToUniform[] = {
                LIST_1("ACE_EntrenchingTool"),
                LIST_3("ACE_epinephrine"),
                LIST_1("ACE_MapTools"),
                LIST_3("ACE_morphine"),
                LIST_4("ACE_tourniquet"),
                LIST_8("ACE_quikclot"),
                LIST_8("ACE_packingBandage"),
                LIST_1("ACE_CableTie"),
                LIST_1("ACE_microDAGR")
            };
            addItemsToVest[] = {
                LIST_1("ACE_Canteen_Half"),
                LIST_1("gm_smokeshell_red_dm23"),
                LIST_1("gm_smokeshell_grn_dm21"),
                LIST_4("gm_30Rnd_556x45mm_B_M855_stanag_gry"),
                LIST_2("gm_smokeshell_wht_dm25")
            };
        };
        class soldier_PG_F {
            uniform = "UK3CB_AAF_B_U_CombatUniform_DIGI_GRN";
            vest = "V_PlateCarrierIA2_dgtl";
            backpack = "B_RadioBag_01_digi_F";
            headgear = "UK3CB_AAF_B_H_PASGT_DIGI_GRN";
            primaryWeapon = "gm_c7a1_blk";
            primaryWeaponMagazine = "gm_30Rnd_556x45mm_B_M855_stanag_gry";
            primaryWeaponOptics = "gm_c79a1_blk";
            handgunWeapon = "rhsusf_weap_m9";
            handgunWeaponMagazine = "rhsusf_mag_15Rnd_9x19_FMJ";
            binoculars = "gm_ferod16_oli";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "ItemGPS";
            radio = "TFAR_anprc154";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_1("ACE_EntrenchingTool"),
                LIST_3("ACE_epinephrine"),
                LIST_1("ACE_MapTools"),
                LIST_3("ACE_morphine"),
                LIST_4("ACE_tourniquet"),
                LIST_8("ACE_quikclot"),
                LIST_8("ACE_packingBandage"),
                LIST_1("ACE_CableTie")
            };
            addItemsToVest[] = {
                LIST_1("ACE_Canteen_Half"),
                LIST_1("gm_handgrenade_frag_dm51a1"),
                LIST_2("gm_smokeshell_wht_dm25"),
                LIST_6("gm_30Rnd_556x45mm_B_M855_stanag_gry"),
                LIST_2("rhsusf_mag_15Rnd_9x19_FMJ")
            };
            addItemsToBackpack[] = {
                LIST_2("gm_30Rnd_556x45mm_B_M855_stanag_gry"),
                LIST_2("gm_smokeshell_red_dm23"),
                LIST_2("gm_smokeshell_grn_dm21"),
                LIST_2("gm_smokeshell_org_dm32")
            };
        };
        class Survivor_F {
            uniform = "U_C_IDAP_Man_casual_F";
            vest = "V_PlateCarrierIAGL_dgtl";
            backpack = "grad_extras_kit_messenger_medic";
            headgear = "H_Cap_Black_IDAP_F";
            primaryWeapon = "gm_c7a1_blk";
            primaryWeaponMagazine = "gm_30Rnd_556x45mm_B_M855_stanag_gry";
            primaryWeaponOptics = "gm_c79a1_blk";
            handgunWeapon = "hgun_ACPC2_F";
            handgunWeaponMagazine = "9Rnd_45ACP_Mag";
            binoculars = "gm_ferod16_oli";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "gm_watch_kosei_80";
            gps = "C_UavTerminal";
            radio = "TFAR_anprc154";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_1("ACE_EntrenchingTool"),
                LIST_1("ACE_microDAGR"),
                LIST_1("ACE_MapTools"),
                LIST_5("ACE_quikclot"),
                LIST_5("ACE_packingBandage"),
                LIST_3("ACE_epinephrine"),
                LIST_3("ACE_morphine"),
                LIST_1("ACE_tourniquet")
            };
            addItemsToVest[] = {
                LIST_2("9Rnd_45ACP_Mag"),
                LIST_6("gm_30Rnd_556x45mm_B_M855_stanag_gry"),
                LIST_1("gm_smokeshell_wht_dm25"),
                LIST_2("gm_smokeshell_grn_dm21")
            };
            addItemsToBackpack[] = {
                LIST_1("ACE_surgicalKit"),
                LIST_8("ACE_tourniquet"),
                LIST_8("ACE_splint"),
                LIST_10("ACE_morphine"),
                LIST_10("ACE_epinephrine"),
                LIST_20("ACE_quikclot"),
                LIST_20("ACE_packingBandage"),
                LIST_1("ACE_personalAidKit"),
                LIST_6("ACE_salineIV_500"),
                LIST_1("ACE_elasticBandage")
            };
        };
        class soldier_repair_F {
            uniform = "UK3CB_AAF_B_U_CombatUniform_DIGI_GRN";
            vest = "V_PlateCarrierIAGL_dgtl";
            backpack = "UK3CB_AAF_B_B_CARRYALL_DIGI_GRN";
            headgear = "H_HelmetCrew_I";
            primaryWeapon = "gm_mpiaks74nk_brn";
            primaryWeaponMagazine = "gm_30Rnd_545x39mm_B_7N6_ak74_prp";
            primaryWeaponOptics = "gm_zvn64_rear_ak";
            primaryWeaponPointer = "gm_zvn64_front";
            binoculars = "gm_ferod16_oli";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "ItemGPS";
            radio = "TFAR_anprc154";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_1("ACE_EntrenchingTool"),
                LIST_3("ACE_epinephrine"),
                LIST_1("ACE_MapTools"),
                LIST_3("ACE_morphine"),
                LIST_4("ACE_tourniquet"),
                LIST_8("ACE_quikclot"),
                LIST_8("ACE_packingBandage"),
                LIST_1("ACE_CableTie")
            };
            addItemsToVest[] = {
                LIST_1("ACE_Canteen_Half"),
                LIST_2("gm_handgrenade_frag_dm51a1"),
                LIST_1("gm_handgrenade_conc_dm51a1"),
                LIST_2("gm_smokeshell_wht_dm25"),
                LIST_5("gm_30Rnd_545x39mm_B_7N6_ak74_prp")
            };
            addItemsToBackpack[] = {
                LIST_1("ACE_Fortify"),
                LIST_1("MineDetector"),
                LIST_1("ACE_UAVBattery"),
                LIST_1("ToolKit"),
                LIST_1("ACE_SpraypaintGreen"),
                LIST_1("ACE_SpraypaintRed"),
                LIST_1("ACE_microDAGR"),
                LIST_1("grad_axe")
            };
        };
        class A_Soldier_TL_lxWS {
            uniform = "UK3CB_AAF_B_U_JumperUniform_Digi_Mix_02";
            vest = "UK3CB_AAF_B_V_SL_Vest_DIGI_BRN";
            backpack = "B_RadioBag_01_digi_F";
            headgear = "H_HelmetB_Light_tna_F";
            primaryWeapon = "arifle_SPAR_02_blk_F";
            primaryWeaponMagazine = "gm_30Rnd_556x45mm_B_M855_stanag_gry";
            primaryWeaponOptics = "optic_dms";
            primaryWeaponPointer = "rhsusf_acc_anpeq15_bk";
            primaryWeaponUnderbarrel = "bipod_03_F_blk";
            binoculars = "ACE_MX2A";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "ItemGPS";
            radio = "TFAR_fadak";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_8("ACE_quikclot"),
                LIST_8("ACE_packingBandage"),
                LIST_3("ACE_epinephrine"),
                LIST_2("ACE_CableTie"),
                LIST_1("ACE_MapTools"),
                LIST_3("ACE_morphine"),
                LIST_2("ACE_tourniquet"),
                LIST_1("ACE_splint"),
                LIST_1("ACE_EntrenchingTool"),
                LIST_1("ACE_Canteen_Empty")
            };
            addItemsToVest[] = {
                LIST_6("gm_30Rnd_556x45mm_B_M855_stanag_gry"),
                LIST_2("gm_smokeshell_wht_dm25"),
                LIST_1("gm_smokeshell_red_dm23"),
                LIST_1("gm_smokeshell_grn_dm21"),
                LIST_2("gm_handgrenade_frag_dm51a1"),
                LIST_2("ACE_M14")
            };
        };
        class A_medic_lxWS {
            uniform = "U_lxWS_SFIA_deserter";
            vest = "V_TacVest_camo";
            backpack = "UK3CB_B_Largepack_Med_Des";
            headgear = "lxWS_H_ssh40_green";
            primaryWeapon = "gm_akm_wud";
            primaryWeaponMagazine = "gm_30Rnd_762x39mm_B_57N231_ak47_blk";
            primaryWeaponOptics = "gm_zvn64_rear_ak";
            primaryWeaponPointer = "gm_zvn64_front";
            binoculars = "gm_ferod16_des";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "";
            radio = "TFAR_fadak";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_8("ACE_quikclot"),
                LIST_8("ACE_packingBandage"),
                LIST_3("ACE_epinephrine"),
                LIST_2("ACE_CableTie"),
                LIST_1("ACE_MapTools"),
                LIST_3("ACE_morphine"),
                LIST_2("ACE_tourniquet"),
                LIST_1("ACE_splint"),
                LIST_1("ACE_Canteen_Empty")
            };
            addItemsToVest[] = {
                LIST_6("gm_30Rnd_762x39mm_B_57N231_ak47_blk"),
                LIST_2("gm_smokeshell_wht_dm25")
            };
            addItemsToBackpack[] = {
                LIST_15("ACE_morphine"),
                LIST_15("ACE_epinephrine"),
                LIST_10("ACE_tourniquet"),
                LIST_8("ACE_splint"),
                LIST_1("ACE_surgicalKit"),
                LIST_30("ACE_quikclot"),
                LIST_10("ACE_quikclot"),
                LIST_30("ACE_packingBandage"),
                LIST_10("ACE_packingBandage"),
                LIST_5("ACE_salineIV_500"),
                LIST_5("ACE_salineIV"),
                LIST_1("ACE_Canteen"),
                LIST_2("ACE_bodyBag"),
                LIST_5("ACE_salineIV_250"),
                LIST_1("ACE_SpraypaintRed"),
                LIST_5("ACE_WaterBottle"),
                LIST_2("gm_smokeshell_grn_dm21")
            };
        };
        class A_Soldier_GL_lxWS {
            uniform = "U_lxWS_SFIA_soldier_2_O";
            vest = "gm_pl_army_vest_80_rifleman_smg_gry";
            backpack = "gm_pl_army_backpack_at_80_gry";
            headgear = "lxWS_H_ssh40_green";
            primaryWeapon = "gm_mpiaks74n_brn";
            primaryWeaponMagazine = "gm_30Rnd_545x39mm_B_7N6_ak74_prp";
            primaryWeaponOptics = "gm_zvn64_rear_ak";
            primaryWeaponPointer = "gm_zvn64_front";
            secondaryWeapon = "rhs_weap_rpg7";
            secondaryWeaponMagazine = "rhs_rpg7_PG7VL_mag";
            secondaryWeaponOptics = "rhs_acc_pgo7v3";
            binoculars = "gm_ferod16_des";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "";
            radio = "TFAR_fadak";
            nvgoggles = "murshun_cigs_cig0_nv";
            addItemsToUniform[] = {
                LIST_8("ACE_quikclot"),
                LIST_8("ACE_packingBandage"),
                LIST_3("ACE_epinephrine"),
                LIST_2("ACE_CableTie"),
                LIST_1("ACE_MapTools"),
                LIST_3("ACE_morphine"),
                LIST_2("ACE_tourniquet"),
                LIST_1("ACE_splint"),
                LIST_1("ACE_EntrenchingTool"),
                LIST_1("ACE_Canteen_Empty")
            };
            addItemsToVest[] = {
                LIST_4("gm_smokeshell_wht_dm25"),
                LIST_8("gm_30Rnd_545x39mm_B_7N6_ak74_prp")
            };
            addItemsToBackpack[] = {
                LIST_2("rhs_rpg7_PG7VL_mag"),
                LIST_1("rhs_rpg7_PG7VR_mag"),
                LIST_4("rhs_rpg7_OG7V_mag")
            };
        };
        class A_Soldier_AR_lxWS {
            uniform = "U_lxWS_UN_Camo2";
            vest = "rhs_6b2_lifchik";
            backpack = "B_AssaultPack_desert_lxWS";
            headgear = "rhsusf_ach_helmet_camo_ocp";
            primaryWeapon = "arifle_Velko_lxWS";
            primaryWeaponMagazine = "50Rnd_556x45_Velko_lxWS";
            primaryWeaponOptics = "optic_Holosight";
            binoculars = "ACE_Yardage450";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "gm_watch_kosei_80";
            gps = "";
            radio = "TFAR_fadak";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_8("ACE_quikclot"),
                LIST_8("ACE_packingBandage"),
                LIST_3("ACE_epinephrine"),
                LIST_2("ACE_CableTie"),
                LIST_1("ACE_MapTools"),
                LIST_3("ACE_morphine"),
                LIST_2("ACE_tourniquet"),
                LIST_1("ACE_splint"),
                LIST_1("ACE_EntrenchingTool"),
                LIST_1("ACE_Canteen_Empty")
            };
            addItemsToVest[] = {
                LIST_4("50Rnd_556x45_Velko_lxWS"),
                LIST_2("gm_smokeshell_wht_dm25"),
                LIST_2("gm_handgrenade_frag_rgd5")
            };
            addItemsToBackpack[] = {
                LIST_10("50Rnd_556x45_Velko_lxWS")
            };
        };
        class A_Soldier_lxWS {
            uniform = "U_O_R_Gorka_01_brown_F";
            vest = "V_SmershVest_01_F";
            backpack = "B_FieldPack_green_F";
            headgear = "lxWS_H_turban_03_green";
            primaryWeapon = "arifle_AK12_arid_F";
            primaryWeaponMagazine = "gm_30Rnd_762x39mm_B_57N231_ak47_blk";
            primaryWeaponOptics = "optic_Arco_AK_arid_F";
            primaryWeaponUnderbarrel = "bipod_02_F_arid";
            handgunWeapon = "hgun_Rook40_F";
            handgunWeaponMagazine = "16Rnd_9x21_Mag";
            binoculars = "Laserdesignator_02";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "gm_watch_kosei_80";
            gps = "";
            radio = "TFAR_fadak";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_8("ACE_quikclot"),
                LIST_8("ACE_packingBandage"),
                LIST_3("ACE_epinephrine"),
                LIST_2("ACE_CableTie"),
                LIST_1("ACE_MapTools"),
                LIST_3("ACE_morphine"),
                LIST_2("ACE_tourniquet"),
                LIST_1("ACE_splint"),
                LIST_1("ACE_EntrenchingTool"),
                LIST_1("ACE_Canteen_Empty")
            };
            addItemsToVest[] = {
                LIST_8("gm_30Rnd_762x39mm_B_57N231_ak47_blk"),
                LIST_2("16Rnd_9x21_Mag"),
                LIST_2("rhs_mag_rgo"),
                LIST_2("rhs_mag_rgn"),
                LIST_1("rhs_mag_nspd"),
                LIST_1("rhs_mag_nspn_red")
            };
            addItemsToBackpack[] = {
                LIST_4("Laserbatteries"),
                LIST_1("rhs_rpg7_PG7VM_mag"),
                LIST_2("rhs_rpg7_OG7V_mag"),
                LIST_6("50Rnd_556x45_Velko_lxWS")
            };
        };
        class A_officer_lxWS {
            uniform = "UK3CB_ADM_B_U_CombatUniform_01_CC_WDL";
            vest = "V_CarrierRigKBT_01_Olive_F";
            backpack = "B_AssaultPack_desert_lxWS";
            headgear = "H_HelmetB_TI_tna_F";
            primaryWeapon = "gm_mpiaks74nk_brn";
            primaryWeaponMagazine = "gm_30Rnd_545x39mm_B_7N6_ak74_prp";
            primaryWeaponOptics = "gm_zvn64_rear_ak";
            primaryWeaponPointer = "gm_zvn64_front";
            binoculars = "Rangefinder";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "ItemGPS";
            radio = "TFAR_fadak";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_8("ACE_quikclot"),
                LIST_8("ACE_packingBandage"),
                LIST_3("ACE_epinephrine"),
                LIST_2("ACE_CableTie"),
                LIST_1("ACE_MapTools"),
                LIST_3("ACE_morphine"),
                LIST_2("ACE_tourniquet"),
                LIST_1("ACE_splint"),
                LIST_1("ACE_Canteen_Empty"),
                LIST_1("ACE_EntrenchingTool")
            };
            addItemsToVest[] = {
                LIST_4("gm_30Rnd_545x39mm_B_7N6_ak74_prp"),
                LIST_1("gm_smokeshell_wht_dm25")
            };
            addItemsToBackpack[] = {
                LIST_1("ToolKit"),
                LIST_1("ACE_rope3"),
                LIST_1("grad_axe"),
                LIST_2("gm_30Rnd_545x39mm_B_7N6_ak74_prp"),
                LIST_2("gm_smokeshell_wht_dm25"),
                LIST_1("rhs_grenade_khattabka_vog25_mag")
            };
        };
        class A_crew_lxWS {
            uniform = "U_lxWS_SFIA_Tanker_O";
            vest = "V_lxWS_TacVestIR_oli";
            backpack = "UK3CB_AAF_I_B_FIELDPACK_DIGI_GRN_Radio";
            headgear = "lxWS_H_Tank_tan_F";
            primaryWeapon = "arifle_AKS_F";
            primaryWeaponMagazine = "gm_30Rnd_545x39mm_B_7N6_ak74_prp";
            binoculars = "Rangefinder";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "ItemGPS";
            radio = "TFAR_fadak";
            nvgoggles = "";
            addItemsToUniform[] = {
                LIST_8("ACE_quikclot"),
                LIST_8("ACE_packingBandage"),
                LIST_3("ACE_epinephrine"),
                LIST_2("ACE_CableTie"),
                LIST_1("ACE_MapTools"),
                LIST_3("ACE_morphine"),
                LIST_2("ACE_tourniquet"),
                LIST_1("ACE_splint"),
                LIST_1("ACE_Canteen_Empty")
            };
            addItemsToVest[] = {
                LIST_6("gm_30Rnd_545x39mm_B_7N6_ak74_prp"),
                LIST_2("gm_smokeshell_wht_dm25"),
                LIST_1("gm_smokeshell_red_dm23"),
                LIST_1("gm_smokeshell_grn_dm21"),
                LIST_1("gm_smokeshell_org_dm32")
            };
            addItemsToBackpack[] = {
                LIST_1("ToolKit")
            };
        };
    };
};