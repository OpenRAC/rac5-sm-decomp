/* LEVEL_17:0x131EC8 -- placement copy of LEVEL_01_14D660.c: patches the id fields of five cached words from the setup record and creates the three missing handles. */
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

extern Setup D_0023F540;
extern unsigned int D_001B0B60;
extern unsigned int D_001B0B64;
extern unsigned int D_001B0B68;
extern unsigned int D_001B0B6C;
extern unsigned int D_001B0B70;
extern int D_001B0B74;
extern int D_001B0B78;
extern int D_001B0B7C;
extern int D_001B0B5C;

extern int func_0E4B38(unsigned int a);
extern int func_0D4AF8(unsigned int a);
extern int func_0EC910(unsigned int a);
extern int func_106410(unsigned int a);

int func_131EC8(void)
{
    D_001B0B60 = (D_001B0B60 & 0xF800FFFF) | (D_0023F540.f7C << 16);
    D_001B0B64 = (D_001B0B64 & 0xF800FFFF) | (D_0023F540.f30 << 16);
    D_001B0B68 = (D_001B0B68 & 0xF800FFFF) | (D_0023F540.f14C << 16);
    D_001B0B6C = (D_001B0B6C & 0xF800FFFF) | (D_0023F540.f78 << 16);
    D_001B0B70 = (D_001B0B70 & 0xF800FFFF) | (D_0023F540.f78 << 16);
    if (D_001B0B74 == -1) {
        D_001B0B74 = func_0E4B38((D_0023F540.fF0 << 16) | 0x90003045);
    }
    if (D_001B0B78 == -1) {
        D_001B0B78 = func_0D4AF8((D_0023F540.fF0 << 16) | 0x90003045);
    }
    if (D_001B0B7C == -1) {
        D_001B0B7C = func_0EC910((D_0023F540.f3C << 16) | 0xA0003045);
    }
    D_001B0B5C = func_106410(0xBE624601);
    return D_001B0B5C;
}
