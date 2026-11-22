/* LEVEL_19:0x1330A0 -- placement copy of LEVEL_01_14D660.c: patches the id fields of five cached words from the setup record and creates the three missing handles. */
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

extern Setup D_0024E3C0;
extern unsigned int D_001BE6E8;
extern unsigned int D_001BE6EC;
extern unsigned int D_001BE6F0;
extern unsigned int D_001BE6F4;
extern unsigned int D_001BE6F8;
extern int D_001BE6FC;
extern int D_001BE700;
extern int D_001BE704;
extern int D_001BE6E4;

extern int func_0E42D0(unsigned int a);
extern int func_0D5100(unsigned int a);
extern int func_0ED5B8(unsigned int a);
extern int func_107538(unsigned int a);

int func_1330A0(void)
{
    D_001BE6E8 = (D_001BE6E8 & 0xF800FFFF) | (D_0024E3C0.f7C << 16);
    D_001BE6EC = (D_001BE6EC & 0xF800FFFF) | (D_0024E3C0.f30 << 16);
    D_001BE6F0 = (D_001BE6F0 & 0xF800FFFF) | (D_0024E3C0.f14C << 16);
    D_001BE6F4 = (D_001BE6F4 & 0xF800FFFF) | (D_0024E3C0.f78 << 16);
    D_001BE6F8 = (D_001BE6F8 & 0xF800FFFF) | (D_0024E3C0.f78 << 16);
    if (D_001BE6FC == -1) {
        D_001BE6FC = func_0E42D0((D_0024E3C0.fF0 << 16) | 0x90003045);
    }
    if (D_001BE700 == -1) {
        D_001BE700 = func_0D5100((D_0024E3C0.fF0 << 16) | 0x90003045);
    }
    if (D_001BE704 == -1) {
        D_001BE704 = func_0ED5B8((D_0024E3C0.f3C << 16) | 0xA0003045);
    }
    D_001BE6E4 = func_107538(0xBE624601);
    return D_001BE6E4;
}
