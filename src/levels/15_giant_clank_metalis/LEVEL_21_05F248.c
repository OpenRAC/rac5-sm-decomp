/* LEVEL_21:0x05F248 -- placement copy of LEVEL_01_07A400.c: drops stale table entries by moving the last entry into their slot. */
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
extern int D_0014ADA0;
extern int D_00148C38;
extern unsigned int D_0014AD98;
extern Ent D_00182518[];

void func_05F248(void)
{
    unsigned int i;

    if (D_0014ADA0 != D_00148C38) {
        for (i = 0; i < D_0014AD98; i++) {
            if (D_00182518[i].w14 == 3 || D_00182518[i].w0 == 0 || (D_00182518[i].w0->w64 & 0xF) != 1) {
                if (i == D_0014AD98 - 1) {
                    D_0014AD98 = i;
                } else {
                    D_0014AD98 = D_0014AD98 - 1;
                    D_00182518[i].w0 = D_00182518[D_0014AD98].w0;
                    D_00182518[i].w8 = D_00182518[D_0014AD98].w8;
                    D_00182518[i].wC = D_00182518[D_0014AD98].wC;
                    D_00182518[i].w10 = D_00182518[D_0014AD98].w10;
                    D_00182518[i].w14 = D_00182518[D_0014AD98].w14;
                }
            }
        }
    }
}
