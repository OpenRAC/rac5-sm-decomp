/* LEVEL_22:0x122FB0 -- placement copy of LEVEL_01_14D660.c: patches the id fields of five cached words from the setup record and creates the three missing handles. */
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

extern Setup D_001ED980;
extern unsigned int D_00166510;
extern unsigned int D_00166514;
extern unsigned int D_00166518;
extern unsigned int D_0016651C;
extern unsigned int D_00166520;
extern int D_00166524;
extern int D_00166528;
extern int D_0016652C;
extern int D_0016650C;

extern int func_0E07C0(unsigned int a);
extern int func_0D10F8(unsigned int a);
extern int func_0E8100(unsigned int a);
extern int func_100C58(unsigned int a);

int func_122FB0(void)
{
    D_00166510 = (D_00166510 & 0xF800FFFF) | (D_001ED980.f7C << 16);
    D_00166514 = (D_00166514 & 0xF800FFFF) | (D_001ED980.f30 << 16);
    D_00166518 = (D_00166518 & 0xF800FFFF) | (D_001ED980.f14C << 16);
    D_0016651C = (D_0016651C & 0xF800FFFF) | (D_001ED980.f78 << 16);
    D_00166520 = (D_00166520 & 0xF800FFFF) | (D_001ED980.f78 << 16);
    if (D_00166524 == -1) {
        D_00166524 = func_0E07C0((D_001ED980.fF0 << 16) | 0x90003045);
    }
    if (D_00166528 == -1) {
        D_00166528 = func_0D10F8((D_001ED980.fF0 << 16) | 0x90003045);
    }
    if (D_0016652C == -1) {
        D_0016652C = func_0E8100((D_001ED980.f3C << 16) | 0xA0003045);
    }
    D_0016650C = func_100C58(0xBE624601);
    return D_0016650C;
}
