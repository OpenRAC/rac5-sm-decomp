/* LEVEL_05:0x149050 -- placement copy of LEVEL_01_14D660.c: patches the id fields of five cached words from the setup record and creates the three missing handles. */
typedef struct Setup {
    char pad0[0x30];
    unsigned int f30;
    char pad1[0x3C - 0x34];
    unsigned int f3C;
    char pad2[0x78 - 0x40];
    unsigned int f78;
    unsigned int f7C;
    char pad3[0xF0 - 0x80];
    unsigned int fF0;
    char pad4[0x14C - 0xF4];
    unsigned int f14C;
} Setup;

extern Setup D_00283C80;
extern unsigned int D_001F6298;
extern unsigned int D_001F629C;
extern unsigned int D_001F62A0;
extern unsigned int D_001F62A4;
extern unsigned int D_001F62A8;
extern int D_001F62AC;
extern int D_001F62B0;
extern int D_001F62B4;
extern int D_001F6294;

extern int func_0F8C40(unsigned int a);
extern int func_0E3BF8(unsigned int a);
extern int func_107F80(unsigned int a);
extern int func_1259E0(unsigned int a);

int func_149050(void)
{
    D_001F6298 = (D_001F6298 & 0xF800FFFF) | (D_00283C80.f7C << 16);
    D_001F629C = (D_001F629C & 0xF800FFFF) | (D_00283C80.f30 << 16);
    D_001F62A0 = (D_001F62A0 & 0xF800FFFF) | (D_00283C80.f14C << 16);
    D_001F62A4 = (D_001F62A4 & 0xF800FFFF) | (D_00283C80.f78 << 16);
    D_001F62A8 = (D_001F62A8 & 0xF800FFFF) | (D_00283C80.f78 << 16);
    if (D_001F62AC == -1) {
        D_001F62AC = func_0F8C40((D_00283C80.fF0 << 16) | 0x90003045);
    }
    if (D_001F62B0 == -1) {
        D_001F62B0 = func_0E3BF8((D_00283C80.fF0 << 16) | 0x90003045);
    }
    if (D_001F62B4 == -1) {
        D_001F62B4 = func_107F80((D_00283C80.f3C << 16) | 0xA0003045);
    }
    D_001F6294 = func_1259E0(0xBE624601);
    return D_001F6294;
}
