/* LEVEL_04:0x07D108 -- placement copy of LEVEL_01_07A400.c: drops stale table entries by moving the last entry into their slot. */
typedef struct {
    char pad0[0x64];
    unsigned int w64;
} Owner;
typedef struct {
    Owner *w0;
    int w4;
    int w8;
    float wC;
    int w10;
    int w14;
} Ent;
extern int D_0020F5E0;
extern int D_0020D138;
extern unsigned int D_0020F5D8;
extern Ent D_00254CC0[];

void func_07D108(void)
{
    unsigned int i;

    if (D_0020F5E0 != D_0020D138) {
        for (i = 0; i < D_0020F5D8; i++) {
            if (D_00254CC0[i].w14 == 3 || D_00254CC0[i].w0 == 0 || (D_00254CC0[i].w0->w64 & 0xF) != 1) {
                if (i == D_0020F5D8 - 1) {
                    D_0020F5D8 = i;
                } else {
                    D_0020F5D8 = D_0020F5D8 - 1;
                    D_00254CC0[i].w0 = D_00254CC0[D_0020F5D8].w0;
                    D_00254CC0[i].w8 = D_00254CC0[D_0020F5D8].w8;
                    D_00254CC0[i].wC = D_00254CC0[D_0020F5D8].wC;
                    D_00254CC0[i].w10 = D_00254CC0[D_0020F5D8].w10;
                    D_00254CC0[i].w14 = D_00254CC0[D_0020F5D8].w14;
                }
            }
        }
    }
}
