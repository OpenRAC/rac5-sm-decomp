/* LEVEL_04:0x159DB0 -- placement copy of LEVEL_01_14D660.c: patches the id fields of five cached words from the setup record and creates the three missing handles. */
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

extern Setup D_002B25C0;
extern unsigned int D_00220958;
extern unsigned int D_0022095C;
extern unsigned int D_00220960;
extern unsigned int D_00220964;
extern unsigned int D_00220968;
extern int D_0022096C;
extern int D_00220970;
extern int D_00220974;
extern int D_00220954;

extern int func_104038(unsigned int a);
extern int func_0EBA48(unsigned int a);
extern int func_115EF0(unsigned int a);
extern int func_1364E8(unsigned int a);

int func_159DB0(void)
{
    D_00220958 = (D_00220958 & 0xF800FFFF) | (D_002B25C0.f7C << 16);
    D_0022095C = (D_0022095C & 0xF800FFFF) | (D_002B25C0.f30 << 16);
    D_00220960 = (D_00220960 & 0xF800FFFF) | (D_002B25C0.f14C << 16);
    D_00220964 = (D_00220964 & 0xF800FFFF) | (D_002B25C0.f78 << 16);
    D_00220968 = (D_00220968 & 0xF800FFFF) | (D_002B25C0.f78 << 16);
    if (D_0022096C == -1) {
        D_0022096C = func_104038((D_002B25C0.fF0 << 16) | 0x90003045);
    }
    if (D_00220970 == -1) {
        D_00220970 = func_0EBA48((D_002B25C0.fF0 << 16) | 0x90003045);
    }
    if (D_00220974 == -1) {
        D_00220974 = func_115EF0((D_002B25C0.f3C << 16) | 0xA0003045);
    }
    D_00220954 = func_1364E8(0xBE624601);
    return D_00220954;
}
