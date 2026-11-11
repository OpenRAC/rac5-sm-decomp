/* LEVEL_23:0x0716D8 -- placement copy of LEVEL_01_07A400.c: drops stale table entries by moving the last entry into their slot. */
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
extern int D_001C9520;
extern int D_001C73B8;
extern unsigned int D_001C9518;
extern Ent D_00207930[];

void func_0716D8(void)
{
    unsigned int i;

    if (D_001C9520 != D_001C73B8) {
        for (i = 0; i < D_001C9518; i++) {
            if (D_00207930[i].w14 == 3 || D_00207930[i].w0 == 0 || (D_00207930[i].w0->w64 & 0xF) != 1) {
                if (i == D_001C9518 - 1) {
                    D_001C9518 = i;
                } else {
                    D_001C9518 = D_001C9518 - 1;
                    D_00207930[i].w0 = D_00207930[D_001C9518].w0;
                    D_00207930[i].w8 = D_00207930[D_001C9518].w8;
                    D_00207930[i].wC = D_00207930[D_001C9518].wC;
                    D_00207930[i].w10 = D_00207930[D_001C9518].w10;
                    D_00207930[i].w14 = D_00207930[D_001C9518].w14;
                }
            }
        }
    }
}
