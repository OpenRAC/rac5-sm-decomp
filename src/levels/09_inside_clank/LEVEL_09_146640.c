/* LEVEL_09:0x146640 -- placement copy of LEVEL_01_14D660.c: patches the id fields of five cached words from the setup record and creates the three missing handles. */
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

extern Setup D_0027F540;
extern unsigned int D_001F0D18;
extern unsigned int D_001F0D1C;
extern unsigned int D_001F0D20;
extern unsigned int D_001F0D24;
extern unsigned int D_001F0D28;
extern int D_001F0D2C;
extern int D_001F0D30;
extern int D_001F0D34;
extern int D_001F0D14;

extern int func_0F89E0(unsigned int a);
extern int func_0E2B70(unsigned int a);
extern int func_105C98(unsigned int a);
extern int func_123000(unsigned int a);

int func_146640(void)
{
    D_001F0D18 = (D_001F0D18 & 0xF800FFFF) | (D_0027F540.f7C << 16);
    D_001F0D1C = (D_001F0D1C & 0xF800FFFF) | (D_0027F540.f30 << 16);
    D_001F0D20 = (D_001F0D20 & 0xF800FFFF) | (D_0027F540.f14C << 16);
    D_001F0D24 = (D_001F0D24 & 0xF800FFFF) | (D_0027F540.f78 << 16);
    D_001F0D28 = (D_001F0D28 & 0xF800FFFF) | (D_0027F540.f78 << 16);
    if (D_001F0D2C == -1) {
        D_001F0D2C = func_0F89E0((D_0027F540.fF0 << 16) | 0x90003045);
    }
    if (D_001F0D30 == -1) {
        D_001F0D30 = func_0E2B70((D_0027F540.fF0 << 16) | 0x90003045);
    }
    if (D_001F0D34 == -1) {
        D_001F0D34 = func_105C98((D_0027F540.f3C << 16) | 0xA0003045);
    }
    D_001F0D14 = func_123000(0xBE624601);
    return D_001F0D14;
}
