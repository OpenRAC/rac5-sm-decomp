/* LEVEL_20:0x05A430 -- placement copy of LEVEL_01_07A400.c: drops stale table entries by moving the last entry into their slot. */
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
extern int D_00106250;
extern int D_001041C4;
extern unsigned int D_00106248;
extern Ent D_001443E8[];

void func_05A430(void)
{
    unsigned int i;

    if (D_00106250 != D_001041C4) {
        for (i = 0; i < D_00106248; i++) {
            if (D_001443E8[i].w14 == 3 || D_001443E8[i].w0 == 0 || (D_001443E8[i].w0->w64 & 0xF) != 1) {
                if (i == D_00106248 - 1) {
                    D_00106248 = i;
                } else {
                    D_00106248 = D_00106248 - 1;
                    D_001443E8[i].w0 = D_001443E8[D_00106248].w0;
                    D_001443E8[i].w8 = D_001443E8[D_00106248].w8;
                    D_001443E8[i].wC = D_001443E8[D_00106248].wC;
                    D_001443E8[i].w10 = D_001443E8[D_00106248].w10;
                    D_001443E8[i].w14 = D_001443E8[D_00106248].w14;
                }
            }
        }
    }
}
