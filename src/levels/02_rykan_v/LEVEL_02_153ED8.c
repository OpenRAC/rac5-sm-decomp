/* LEVEL_02:0x153ED8 -- placement copy of LEVEL_01_14D660.c: patches the id fields of five cached words from the setup record and creates the three missing handles. */
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

extern Setup D_002AF2C0;
extern unsigned int D_0021C1E8;
extern unsigned int D_0021C1EC;
extern unsigned int D_0021C1F0;
extern unsigned int D_0021C1F4;
extern unsigned int D_0021C1F8;
extern int D_0021C1FC;
extern int D_0021C200;
extern int D_0021C204;
extern int D_0021C1E4;

extern int func_102CB0(unsigned int a);
extern int func_0ECB18(unsigned int a);
extern int func_10FF68(unsigned int a);
extern int func_130418(unsigned int a);

int func_153ED8(void)
{
    D_0021C1E8 = (D_0021C1E8 & 0xF800FFFF) | (D_002AF2C0.f7C << 16);
    D_0021C1EC = (D_0021C1EC & 0xF800FFFF) | (D_002AF2C0.f30 << 16);
    D_0021C1F0 = (D_0021C1F0 & 0xF800FFFF) | (D_002AF2C0.f14C << 16);
    D_0021C1F4 = (D_0021C1F4 & 0xF800FFFF) | (D_002AF2C0.f78 << 16);
    D_0021C1F8 = (D_0021C1F8 & 0xF800FFFF) | (D_002AF2C0.f78 << 16);
    if (D_0021C1FC == -1) {
        D_0021C1FC = func_102CB0((D_002AF2C0.fF0 << 16) | 0x90003045);
    }
    if (D_0021C200 == -1) {
        D_0021C200 = func_0ECB18((D_002AF2C0.fF0 << 16) | 0x90003045);
    }
    if (D_0021C204 == -1) {
        D_0021C204 = func_10FF68((D_002AF2C0.f3C << 16) | 0xA0003045);
    }
    D_0021C1E4 = func_130418(0xBE624601);
    return D_0021C1E4;
}
