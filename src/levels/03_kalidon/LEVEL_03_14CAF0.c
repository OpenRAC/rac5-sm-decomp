/* LEVEL_03:0x14CAF0 -- placement copy of LEVEL_01_14D660.c: patches the id fields of five cached words from the setup record and creates the three missing handles. */
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

extern Setup D_002B2C40;
extern unsigned int D_0021F8B8;
extern unsigned int D_0021F8BC;
extern unsigned int D_0021F8C0;
extern unsigned int D_0021F8C4;
extern unsigned int D_0021F8C8;
extern int D_0021F8CC;
extern int D_0021F8D0;
extern int D_0021F8D4;
extern int D_0021F8B4;

extern int func_0FB398(unsigned int a);
extern int func_0E5F70(unsigned int a);
extern int func_108650(unsigned int a);
extern int func_1282D0(unsigned int a);

int func_14CAF0(void)
{
    D_0021F8B8 = (D_0021F8B8 & 0xF800FFFF) | (D_002B2C40.f7C << 16);
    D_0021F8BC = (D_0021F8BC & 0xF800FFFF) | (D_002B2C40.f30 << 16);
    D_0021F8C0 = (D_0021F8C0 & 0xF800FFFF) | (D_002B2C40.f14C << 16);
    D_0021F8C4 = (D_0021F8C4 & 0xF800FFFF) | (D_002B2C40.f78 << 16);
    D_0021F8C8 = (D_0021F8C8 & 0xF800FFFF) | (D_002B2C40.f78 << 16);
    if (D_0021F8CC == -1) {
        D_0021F8CC = func_0FB398((D_002B2C40.fF0 << 16) | 0x90003045);
    }
    if (D_0021F8D0 == -1) {
        D_0021F8D0 = func_0E5F70((D_002B2C40.fF0 << 16) | 0x90003045);
    }
    if (D_0021F8D4 == -1) {
        D_0021F8D4 = func_108650((D_002B2C40.f3C << 16) | 0xA0003045);
    }
    D_0021F8B4 = func_1282D0(0xBE624601);
    return D_0021F8B4;
}
