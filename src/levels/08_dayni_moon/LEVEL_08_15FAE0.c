/* LEVEL_08:0x15FAE0 -- placement copy of LEVEL_01_14D660.c: patches the id fields of five cached words from the setup record and creates the three missing handles. */
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

extern Setup D_002E7040;
extern unsigned int D_00250400;
extern unsigned int D_00250404;
extern unsigned int D_00250408;
extern unsigned int D_0025040C;
extern unsigned int D_00250410;
extern int D_00250414;
extern int D_00250418;
extern int D_0025041C;
extern int D_002503FC;

extern int func_108548(unsigned int a);
extern int func_0F1158(unsigned int a);
extern int func_11AA40(unsigned int a);
extern int func_13B5A0(unsigned int a);

int func_15FAE0(void)
{
    D_00250400 = (D_00250400 & 0xF800FFFF) | (D_002E7040.f7C << 16);
    D_00250404 = (D_00250404 & 0xF800FFFF) | (D_002E7040.f30 << 16);
    D_00250408 = (D_00250408 & 0xF800FFFF) | (D_002E7040.f14C << 16);
    D_0025040C = (D_0025040C & 0xF800FFFF) | (D_002E7040.f78 << 16);
    D_00250410 = (D_00250410 & 0xF800FFFF) | (D_002E7040.f78 << 16);
    if (D_00250414 == -1) {
        D_00250414 = func_108548((D_002E7040.fF0 << 16) | 0x90003045);
    }
    if (D_00250418 == -1) {
        D_00250418 = func_0F1158((D_002E7040.fF0 << 16) | 0x90003045);
    }
    if (D_0025041C == -1) {
        D_0025041C = func_11AA40((D_002E7040.f3C << 16) | 0xA0003045);
    }
    D_002503FC = func_13B5A0(0xBE624601);
    return D_002503FC;
}
