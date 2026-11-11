/* LEVEL_22:0x06CDC0 -- placement copy of LEVEL_01_07A400.c: drops stale table entries by moving the last entry into their slot. */
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
extern int D_001554A0;
extern int D_00153338;
extern unsigned int D_00155498;
extern Ent D_0018C0B0[];

void func_06CDC0(void)
{
    unsigned int i;

    if (D_001554A0 != D_00153338) {
        for (i = 0; i < D_00155498; i++) {
            if (D_0018C0B0[i].w14 == 3 || D_0018C0B0[i].w0 == 0 || (D_0018C0B0[i].w0->w64 & 0xF) != 1) {
                if (i == D_00155498 - 1) {
                    D_00155498 = i;
                } else {
                    D_00155498 = D_00155498 - 1;
                    D_0018C0B0[i].w0 = D_0018C0B0[D_00155498].w0;
                    D_0018C0B0[i].w8 = D_0018C0B0[D_00155498].w8;
                    D_0018C0B0[i].wC = D_0018C0B0[D_00155498].wC;
                    D_0018C0B0[i].w10 = D_0018C0B0[D_00155498].w10;
                    D_0018C0B0[i].w14 = D_0018C0B0[D_00155498].w14;
                }
            }
        }
    }
}
