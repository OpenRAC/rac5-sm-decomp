/* LEVEL_18:0x06A958 -- placement copy of LEVEL_01_07A400.c: drops stale table entries by moving the last entry into their slot. */
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
extern int D_001A4FF0;
extern int D_001A2F64;
extern unsigned int D_001A4FE8;
extern Ent D_001ECF00[];

void func_06A958(void)
{
    unsigned int i;

    if (D_001A4FF0 != D_001A2F64) {
        for (i = 0; i < D_001A4FE8; i++) {
            if (D_001ECF00[i].w14 == 3 || D_001ECF00[i].w0 == 0 || (D_001ECF00[i].w0->w64 & 0xF) != 1) {
                if (i == D_001A4FE8 - 1) {
                    D_001A4FE8 = i;
                } else {
                    D_001A4FE8 = D_001A4FE8 - 1;
                    D_001ECF00[i].w0 = D_001ECF00[D_001A4FE8].w0;
                    D_001ECF00[i].w8 = D_001ECF00[D_001A4FE8].w8;
                    D_001ECF00[i].wC = D_001ECF00[D_001A4FE8].wC;
                    D_001ECF00[i].w10 = D_001ECF00[D_001A4FE8].w10;
                    D_001ECF00[i].w14 = D_001ECF00[D_001A4FE8].w14;
                }
            }
        }
    }
}
