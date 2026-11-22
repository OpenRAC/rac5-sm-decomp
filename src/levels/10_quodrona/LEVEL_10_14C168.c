/* LEVEL_10:0x14C168 -- placement copy of LEVEL_01_14D660.c: patches the id fields of five cached words from the setup record and creates the three missing handles. */
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

extern Setup D_002A11C0;
extern unsigned int D_0020FE90;
extern unsigned int D_0020FE94;
extern unsigned int D_0020FE98;
extern unsigned int D_0020FE9C;
extern unsigned int D_0020FEA0;
extern int D_0020FEA4;
extern int D_0020FEA8;
extern int D_0020FEAC;
extern int D_0020FE8C;

extern int func_0FC440(unsigned int a);
extern int func_0E75C8(unsigned int a);
extern int func_10AAC0(unsigned int a);
extern int func_127EC8(unsigned int a);

int func_14C168(void)
{
    D_0020FE90 = (D_0020FE90 & 0xF800FFFF) | (D_002A11C0.f7C << 16);
    D_0020FE94 = (D_0020FE94 & 0xF800FFFF) | (D_002A11C0.f30 << 16);
    D_0020FE98 = (D_0020FE98 & 0xF800FFFF) | (D_002A11C0.f14C << 16);
    D_0020FE9C = (D_0020FE9C & 0xF800FFFF) | (D_002A11C0.f78 << 16);
    D_0020FEA0 = (D_0020FEA0 & 0xF800FFFF) | (D_002A11C0.f78 << 16);
    if (D_0020FEA4 == -1) {
        D_0020FEA4 = func_0FC440((D_002A11C0.fF0 << 16) | 0x90003045);
    }
    if (D_0020FEA8 == -1) {
        D_0020FEA8 = func_0E75C8((D_002A11C0.fF0 << 16) | 0x90003045);
    }
    if (D_0020FEAC == -1) {
        D_0020FEAC = func_10AAC0((D_002A11C0.f3C << 16) | 0xA0003045);
    }
    D_0020FE8C = func_127EC8(0xBE624601);
    return D_0020FE8C;
}
