/* LEVEL_06:0x143D58 -- placement copy of LEVEL_01_14D660.c: patches the id fields of five cached words from the setup record and creates the three missing handles. */
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

extern Setup D_00284B40;
extern unsigned int D_001F5E18;
extern unsigned int D_001F5E1C;
extern unsigned int D_001F5E20;
extern unsigned int D_001F5E24;
extern unsigned int D_001F5E28;
extern int D_001F5E2C;
extern int D_001F5E30;
extern int D_001F5E34;
extern int D_001F5E14;

extern int func_0F5BC0(unsigned int a);
extern int func_0E0A88(unsigned int a);
extern int func_102E78(unsigned int a);
extern int func_1206C0(unsigned int a);

int func_143D58(void)
{
    D_001F5E18 = (D_001F5E18 & 0xF800FFFF) | (D_00284B40.f7C << 16);
    D_001F5E1C = (D_001F5E1C & 0xF800FFFF) | (D_00284B40.f30 << 16);
    D_001F5E20 = (D_001F5E20 & 0xF800FFFF) | (D_00284B40.f14C << 16);
    D_001F5E24 = (D_001F5E24 & 0xF800FFFF) | (D_00284B40.f78 << 16);
    D_001F5E28 = (D_001F5E28 & 0xF800FFFF) | (D_00284B40.f78 << 16);
    if (D_001F5E2C == -1) {
        D_001F5E2C = func_0F5BC0((D_00284B40.fF0 << 16) | 0x90003045);
    }
    if (D_001F5E30 == -1) {
        D_001F5E30 = func_0E0A88((D_00284B40.fF0 << 16) | 0x90003045);
    }
    if (D_001F5E34 == -1) {
        D_001F5E34 = func_102E78((D_00284B40.f3C << 16) | 0xA0003045);
    }
    D_001F5E14 = func_1206C0(0xBE624601);
    return D_001F5E14;
}
