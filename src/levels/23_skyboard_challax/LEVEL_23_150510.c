/* LEVEL_23:0x150510 -- placement copy of LEVEL_01_14D660.c: patches the id fields of five cached words from the setup record and creates the three missing handles. */
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

extern Setup D_00269200;
extern unsigned int D_001DAA40;
extern unsigned int D_001DAA44;
extern unsigned int D_001DAA48;
extern unsigned int D_001DAA4C;
extern unsigned int D_001DAA50;
extern int D_001DAA54;
extern int D_001DAA58;
extern int D_001DAA5C;
extern int D_001DAA3C;

extern int func_0EF9E8(unsigned int a);
extern int func_0DA9A0(unsigned int a);
extern int func_0FCCA0(unsigned int a);
extern int func_11AEE0(unsigned int a);

int func_150510(void)
{
    D_001DAA40 = (D_001DAA40 & 0xF800FFFF) | (D_00269200.f7C << 16);
    D_001DAA44 = (D_001DAA44 & 0xF800FFFF) | (D_00269200.f30 << 16);
    D_001DAA48 = (D_001DAA48 & 0xF800FFFF) | (D_00269200.f14C << 16);
    D_001DAA4C = (D_001DAA4C & 0xF800FFFF) | (D_00269200.f78 << 16);
    D_001DAA50 = (D_001DAA50 & 0xF800FFFF) | (D_00269200.f78 << 16);
    if (D_001DAA54 == -1) {
        D_001DAA54 = func_0EF9E8((D_00269200.fF0 << 16) | 0x90003045);
    }
    if (D_001DAA58 == -1) {
        D_001DAA58 = func_0DA9A0((D_00269200.fF0 << 16) | 0x90003045);
    }
    if (D_001DAA5C == -1) {
        D_001DAA5C = func_0FCCA0((D_00269200.f3C << 16) | 0xA0003045);
    }
    D_001DAA3C = func_11AEE0(0xBE624601);
    return D_001DAA3C;
}
