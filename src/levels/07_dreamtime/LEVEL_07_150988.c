/* LEVEL_07:0x150988 -- placement copy of LEVEL_01_14D660.c: patches the id fields of five cached words from the setup record and creates the three missing handles. */
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

extern Setup D_002AD6C0;
extern unsigned int D_0021B520;
extern unsigned int D_0021B524;
extern unsigned int D_0021B528;
extern unsigned int D_0021B52C;
extern unsigned int D_0021B530;
extern int D_0021B534;
extern int D_0021B538;
extern int D_0021B53C;
extern int D_0021B51C;

extern int func_0FD900(unsigned int a);
extern int func_0E76B0(unsigned int a);
extern int func_10D2F0(unsigned int a);
extern int func_12D068(unsigned int a);

int func_150988(void)
{
    D_0021B520 = (D_0021B520 & 0xF800FFFF) | (D_002AD6C0.f7C << 16);
    D_0021B524 = (D_0021B524 & 0xF800FFFF) | (D_002AD6C0.f30 << 16);
    D_0021B528 = (D_0021B528 & 0xF800FFFF) | (D_002AD6C0.f14C << 16);
    D_0021B52C = (D_0021B52C & 0xF800FFFF) | (D_002AD6C0.f78 << 16);
    D_0021B530 = (D_0021B530 & 0xF800FFFF) | (D_002AD6C0.f78 << 16);
    if (D_0021B534 == -1) {
        D_0021B534 = func_0FD900((D_002AD6C0.fF0 << 16) | 0x90003045);
    }
    if (D_0021B538 == -1) {
        D_0021B538 = func_0E76B0((D_002AD6C0.fF0 << 16) | 0x90003045);
    }
    if (D_0021B53C == -1) {
        D_0021B53C = func_10D2F0((D_002AD6C0.f3C << 16) | 0xA0003045);
    }
    D_0021B51C = func_12D068(0xBE624601);
    return D_0021B51C;
}
