/* LEVEL_24:0x143BB0 -- placement copy of LEVEL_01_14D660.c: patches the id fields of five cached words from the setup record and creates the three missing handles. */
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

extern Setup D_00263C80;
extern unsigned int D_001D81C0;
extern unsigned int D_001D81C4;
extern unsigned int D_001D81C8;
extern unsigned int D_001D81CC;
extern unsigned int D_001D81D0;
extern int D_001D81D4;
extern int D_001D81D8;
extern int D_001D81DC;
extern int D_001D81BC;

extern int func_0F4710(unsigned int a);
extern int func_0DD4D8(unsigned int a);
extern int func_1019C8(unsigned int a);
extern int func_11FB68(unsigned int a);

int func_143BB0(void)
{
    D_001D81C0 = (D_001D81C0 & 0xF800FFFF) | (D_00263C80.f7C << 16);
    D_001D81C4 = (D_001D81C4 & 0xF800FFFF) | (D_00263C80.f30 << 16);
    D_001D81C8 = (D_001D81C8 & 0xF800FFFF) | (D_00263C80.f14C << 16);
    D_001D81CC = (D_001D81CC & 0xF800FFFF) | (D_00263C80.f78 << 16);
    D_001D81D0 = (D_001D81D0 & 0xF800FFFF) | (D_00263C80.f78 << 16);
    if (D_001D81D4 == -1) {
        D_001D81D4 = func_0F4710((D_00263C80.fF0 << 16) | 0x90003045);
    }
    if (D_001D81D8 == -1) {
        D_001D81D8 = func_0DD4D8((D_00263C80.fF0 << 16) | 0x90003045);
    }
    if (D_001D81DC == -1) {
        D_001D81DC = func_1019C8((D_00263C80.f3C << 16) | 0xA0003045);
    }
    D_001D81BC = func_11FB68(0xBE624601);
    return D_001D81BC;
}
