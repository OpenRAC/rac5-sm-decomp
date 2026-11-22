/* LEVEL_01:0x14D660 -- patches the id fields of five cached words from the setup record and creates the three missing handles. */
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

extern Setup D_00297DC0;
extern unsigned int D_00207218;
extern unsigned int D_0020721C;
extern unsigned int D_00207220;
extern unsigned int D_00207224;
extern unsigned int D_00207228;
extern int D_0020722C;
extern int D_00207230;
extern int D_00207234;
extern int D_00207214;

extern int func_0FCB00(unsigned int a);
extern int func_0E6188(unsigned int a);
extern int func_109DB8(unsigned int a);
extern int func_12A068(unsigned int a);

int func_14D660(void)
{
    D_00207218 = (D_00207218 & 0xF800FFFF) | (D_00297DC0.f7C << 16);
    D_0020721C = (D_0020721C & 0xF800FFFF) | (D_00297DC0.f30 << 16);
    D_00207220 = (D_00207220 & 0xF800FFFF) | (D_00297DC0.f14C << 16);
    D_00207224 = (D_00207224 & 0xF800FFFF) | (D_00297DC0.f78 << 16);
    D_00207228 = (D_00207228 & 0xF800FFFF) | (D_00297DC0.f78 << 16);
    if (D_0020722C == -1) {
        D_0020722C = func_0FCB00((D_00297DC0.fF0 << 16) | 0x90003045);
    }
    if (D_00207230 == -1) {
        D_00207230 = func_0E6188((D_00297DC0.fF0 << 16) | 0x90003045);
    }
    if (D_00207234 == -1) {
        D_00207234 = func_109DB8((D_00297DC0.f3C << 16) | 0xA0003045);
    }
    D_00207214 = func_12A068(0xBE624601);
    return D_00207214;
}
