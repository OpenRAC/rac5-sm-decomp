/* LEVEL_16:0x132478 -- placement copy of LEVEL_01_14D660.c: patches the id fields of five cached words from the setup record and creates the three missing handles. */
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

extern Setup D_0024E240;
extern unsigned int D_001BD568;
extern unsigned int D_001BD56C;
extern unsigned int D_001BD570;
extern unsigned int D_001BD574;
extern unsigned int D_001BD578;
extern int D_001BD57C;
extern int D_001BD580;
extern int D_001BD584;
extern int D_001BD564;

extern int func_0E5C10(unsigned int a);
extern int func_0D5828(unsigned int a);
extern int func_0ED9E8(unsigned int a);
extern int func_106E98(unsigned int a);

int func_132478(void)
{
    D_001BD568 = (D_001BD568 & 0xF800FFFF) | (D_0024E240.f7C << 16);
    D_001BD56C = (D_001BD56C & 0xF800FFFF) | (D_0024E240.f30 << 16);
    D_001BD570 = (D_001BD570 & 0xF800FFFF) | (D_0024E240.f14C << 16);
    D_001BD574 = (D_001BD574 & 0xF800FFFF) | (D_0024E240.f78 << 16);
    D_001BD578 = (D_001BD578 & 0xF800FFFF) | (D_0024E240.f78 << 16);
    if (D_001BD57C == -1) {
        D_001BD57C = func_0E5C10((D_0024E240.fF0 << 16) | 0x90003045);
    }
    if (D_001BD580 == -1) {
        D_001BD580 = func_0D5828((D_0024E240.fF0 << 16) | 0x90003045);
    }
    if (D_001BD584 == -1) {
        D_001BD584 = func_0ED9E8((D_0024E240.f3C << 16) | 0xA0003045);
    }
    D_001BD564 = func_106E98(0xBE624601);
    return D_001BD564;
}
