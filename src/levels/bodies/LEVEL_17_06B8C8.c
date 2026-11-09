/* LEVEL_17:0x06B8C8 -- placement copy of LEVEL_01_07A400.c: drops stale table entries by moving the last entry into their slot. */
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
extern int D_00197170;
extern int D_001950E4;
extern unsigned int D_00197168;
extern Ent D_001DDE80[];

void func_06B8C8(void)
{
    unsigned int i;

    if (D_00197170 != D_001950E4) {
        for (i = 0; i < D_00197168; i++) {
            if (D_001DDE80[i].w14 == 3 || D_001DDE80[i].w0 == 0 || (D_001DDE80[i].w0->w64 & 0xF) != 1) {
                if (i == D_00197168 - 1) {
                    D_00197168 = i;
                } else {
                    D_00197168 = D_00197168 - 1;
                    D_001DDE80[i].w0 = D_001DDE80[D_00197168].w0;
                    D_001DDE80[i].w8 = D_001DDE80[D_00197168].w8;
                    D_001DDE80[i].wC = D_001DDE80[D_00197168].wC;
                    D_001DDE80[i].w10 = D_001DDE80[D_00197168].w10;
                    D_001DDE80[i].w14 = D_001DDE80[D_00197168].w14;
                }
            }
        }
    }
}
