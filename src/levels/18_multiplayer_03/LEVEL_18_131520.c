/* LEVEL_18:0x131520 -- placement copy of LEVEL_01_14D660.c: patches the id fields of five cached words from the setup record and creates the three missing handles. */
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

extern Setup D_0024E5C0;
extern unsigned int D_001BE9E8;
extern unsigned int D_001BE9EC;
extern unsigned int D_001BE9F0;
extern unsigned int D_001BE9F4;
extern unsigned int D_001BE9F8;
extern int D_001BE9FC;
extern int D_001BEA00;
extern int D_001BEA04;
extern int D_001BE9E4;

extern int func_0E39D0(unsigned int a);
extern int func_0D4800(unsigned int a);
extern int func_0EB7A8(unsigned int a);
extern int func_105B48(unsigned int a);

int func_131520(void)
{
    D_001BE9E8 = (D_001BE9E8 & 0xF800FFFF) | (D_0024E5C0.f7C << 16);
    D_001BE9EC = (D_001BE9EC & 0xF800FFFF) | (D_0024E5C0.f30 << 16);
    D_001BE9F0 = (D_001BE9F0 & 0xF800FFFF) | (D_0024E5C0.f14C << 16);
    D_001BE9F4 = (D_001BE9F4 & 0xF800FFFF) | (D_0024E5C0.f78 << 16);
    D_001BE9F8 = (D_001BE9F8 & 0xF800FFFF) | (D_0024E5C0.f78 << 16);
    if (D_001BE9FC == -1) {
        D_001BE9FC = func_0E39D0((D_0024E5C0.fF0 << 16) | 0x90003045);
    }
    if (D_001BEA00 == -1) {
        D_001BEA00 = func_0D4800((D_0024E5C0.fF0 << 16) | 0x90003045);
    }
    if (D_001BEA04 == -1) {
        D_001BEA04 = func_0EB7A8((D_0024E5C0.f3C << 16) | 0xA0003045);
    }
    D_001BE9E4 = func_105B48(0xBE624601);
    return D_001BE9E4;
}
