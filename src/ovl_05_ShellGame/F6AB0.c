#include "common.h"
#include "ShellGame.h"

#ifdef RODATA_SUPPORT
void func_800F65E0_F6AB0(void) {
    unk_Struct00* temp_s0_2;
    s32 temp_s0;

    func_80029090(50);
    InitObjSystem(50, 0);
    func_80060088();
    func_8001DE70(64);
    func_8005D8B8(func_8005D384(0x7FDA, 0, 0, -1, func_8005EB1C), 0xA0);
    func_800234B8(0, 0xA0, 0x78, 0x78);
    func_800234B8(1, 0xFF, 0xA8, 0xA8);
    func_80023504(1, -96.0f, 100.0f, 26.0f);
    func_800178A0(1);
    temp_s0 = func_800178E8();
    func_80017660(temp_s0, 0.0f, 0.0f, 320.0f, 240.0f);
    func_800176C4(temp_s0, 640.0f, 480.0f, 511.0f, 640.0f, 480.0f, 511.0f);
    func_8001D494(0, 45.0f, 80.0f, 4000.0f);
    func_800F7034_F7504();
    func_800F720C_F76DC(GetRandomByte());
    func_800F7550_F7A20();
    func_800F828C_F875C();
    func_800F87CC_F8C9C();
    temp_s0_2 = D_800C3110;
    D_800FF168 = func_800AEAC0(temp_s0_2->unk_40 / 2.0) / func_800AEFD0(temp_s0_2->unk_40 / 2.0);
    func_80086F08(&D_800FF128, &temp_s0_2->unk138);
    func_80028510(0x3A5, 0x402, 0xFF, 0xC8, 0xC8);
    D_800F2BC0 = 0;
    D_800ED440 = 0;
    D_800EE984 = 0;
    D_800FF0F8 = func_8005D384(0x20, 0, 0, -1, &func_800F689C_F6D6C);
    D_800FF9EC = 0;
    D_800FFA3C = 0;
    D_800FF10C = 0x14A;
    D_800FEC14 = 1;
    D_800FF780 = 0;
    D_800FF782 = 0;
    D_800FEC16 = 0;
    D_800FEC18 = 0;
    D_800FEC1C = 0;
    D_800FF784 = 0;
    func_8007B168(&D_800FEC60, 1);
    func_8007B168(&D_800FEC6C, 1);
    func_8007B168(&D_800FEC7C, 1);
}
#else
INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F65E0_F6AB0);
#endif

void func_800F689C_F6D6C(unkObjectStruct* arg0) {
    arg0->func_ptr = &func_800F68E8_F6DB8;
    func_800F9618_F9AE8();
    func_800F9738_F9C08();
    func_800F915C_F962C();
    if (IsFlagSet(0x2B) != 0) {
        D_800FF784 = 1;
    }
}
void func_800F68E8_F6DB8(unkObjectStruct* arg0) {
    func_800F76C4_F7B94();
    func_800F85B4_F8A84();
    func_800F8CF8_F91C8();
    func_800F7BDC_F80AC();
    func_800F6A98_F6F68(arg0);
    
    if (D_800FEC16 == 1) {
        if (D_800ED430 == D_800FEC16) {
            if ((func_800F8154_F8624() << 0x10) == 0) {
                if (D_800F3FB0->unk_1C == 0.0f) {
                    D_800FF10C = 0;
                    D_800FFA3C = 0;
                    D_800FEC16 = 0;
                    D_800FEC14 = 0;
                    if (D_800FF784 == 0) {
                        D_800FF0F8->func_ptr = &func_800F6AC0_F6F90;
                    } else {
                        func_800601D4(0x28);
                        D_800FF0F8->func_ptr = &func_800F6EE4_F73B4;
                    }
                    D_800FF9D6 = 5;
                    D_800ED430 = 0;
                    D_800FF780 = 1;
                    D_800ED430 = 0;                    
                }
            }
        }
    }
}

void func_800F6A14_F6EE4(void) {
    u16 i;

    func_800F87AC_F8C7C();
    func_800F913C_F960C();
    func_80060198();
    
    for (i = 0; i < D_800F37DA; i++) {
        FreePerm(D_800FF718[i]);
    }
    
    func_8005DFB8(1);
}

void func_800F6A98_F6F68(unkObjectStruct* arg0) {
    if (D_800F5144 == 1) {
        arg0->func_ptr = &func_800F6A14_F6EE4;
    }
}

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F6AC0_F6F90);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F6EE4_F73B4);

void func_800F6FFC_F74CC(unkObjectStruct* arg0) {
    if (func_80072718() == 0) {
        arg0->func_ptr = &func_800F6A14_F6EE4;
    }
}

void func_800F7034_F7504(void) {
    D_800F33EC.y = -34.26f;
    D_800F33EC.x = 0.0f;
    D_800F33EC.z = 0.0f;
    D_800F6524.x = -5.5f;
    D_800F6524.y = -81.0f;
    D_800F6524.z = 0.0f;
    D_800EE98C = 1328.0f;
}

void func_800F7098_F7568(f32 arg0) {
    unkObjectStruct* temp_a0;
    
    if (arg0 == 0.0) {
        temp_a0 = D_800F3FB0;
        D_800FF0A0.x = D_800F6524.x;
        D_800FF0A0.y = D_800F6524.y;
        D_800FF0A0.z = D_800F6524.z;
        D_800FF0AC_ovl05.x = temp_a0->unk_18;
        D_800FF0AC_ovl05.y = temp_a0->unk_1C;
        D_800FF0AC_ovl05.z = temp_a0->unk_20;
        return;
    }
    D_800F6524.x = D_800FF0A0.x + (arg0 * (D_800FF0AC_ovl05.x - D_800FF0A0.x));
    D_800F6524.y = D_800FF0A0.y + (arg0 * (D_800FF0AC_ovl05.y - D_800FF0A0.y));
    D_800F6524.z = D_800FF0A0.z + (arg0 * (D_800FF0AC_ovl05.z - D_800FF0A0.z));
    D_800EE98C = D_800FECE8 - (arg0 * D_800FECE0);
}

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F719C_F766C);

void func_800F720C_F76DC(u8 arg0) {
    D_800FEC10 = arg0 + (arg0 * D_800FEC10);
}

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F7230_F7700);

f32 func_800F7398_F7868(f32 arg0, f32 arg1) {
    f32 var_f4;
    f64 temp_f0;
    f64 temp_f2;
    f64 temp_f2_2;
    f64 var_f0;

    var_f4 = func_800B0CD8(arg0, arg1);
    temp_f0 = var_f4;
    temp_f2 = D_800FED30;
    if ((temp_f2 < temp_f0)) {
        var_f4 = temp_f0 - temp_f2;
    } else {
        temp_f2_2 = (f64) var_f4;
        if (temp_f2_2 < 0.0) {
            var_f4 = temp_f2_2 + D_800FED38;
        }        
    }
    return var_f4;
}

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F7410_F78E0);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F7470_F7940);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F750C_F79DC);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F7550_F7A20);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F76C4_F7B94);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F7840_F7D10);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F79FC_F7ECC);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F7AE8_F7FB8);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F7BDC_F80AC);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F7DA8_F8278);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F8154_F8624);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F8238_F8708);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F828C_F875C);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F83BC_F888C);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F85B4_F8A84);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F87AC_F8C7C);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F87CC_F8C9C);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F88E8_F8DB8);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F8CF8_F91C8);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F913C_F960C);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F915C_F962C);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F91DC_F96AC);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F94A0_F9970);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F9570_F9A40);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F9618_F9AE8);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F9738_F9C08);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F9A8C_F9F5C);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800F9E24_FA2F4);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FA038_FA508);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FA0EC_FA5BC);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FA664_FAB34);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FA954_FAE24);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FAA44_FAF14);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FAC34_FB104);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FB030_FB500);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FB120_FB5F0);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FB4A4_FB974);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FBB44_FC014);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FBBC8_FC098);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FBDB8_FC288);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FBEF0_FC3C0);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FC17C_FC64C);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FC3F4_FC8C4);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FC55C_FCA2C);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FC6E0_FCBB0);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FC714_FCBE4);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FC748_FCC18);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FC77C_FCC4C);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FC7B0_FCC80);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FC800_FCCD0);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FCF90_FD460);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FD448_FD918);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FD538_FDA08);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FD808_FDCD8);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FDD94_FE264);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FDE08_FE2D8);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FDE50_FE320);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FDF28_FE3F8);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FE010_FE4E0);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FE07C_FE54C);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FE46C_FE93C);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FE5BC_FEA8C);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FE6BC_FEB8C);

void func_800FE7AC_FEC7C(void) {
}

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FE7B4_FEC84);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FE87C_FED4C);

INCLUDE_ASM(s32, "ovl_05_ShellGame/F6AB0", func_800FEB40_FF010);
