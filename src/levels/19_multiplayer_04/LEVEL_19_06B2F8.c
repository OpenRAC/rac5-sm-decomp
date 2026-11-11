/* LEVEL_19:0x06B2F8 -- placement copy of LEVEL_01_07A400.c: drops stale table entries by moving the last entry into their slot. */
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
extern int D_001A4CF0;
extern int D_001A2C64;
extern unsigned int D_001A4CE8;
extern Ent D_001ECD00[];

void func_06B2F8(void)
{
    unsigned int i;

    if (D_001A4CF0 != D_001A2C64) {
        for (i = 0; i < D_001A4CE8; i++) {
            if (D_001ECD00[i].w14 == 3 || D_001ECD00[i].w0 == 0 || (D_001ECD00[i].w0->w64 & 0xF) != 1) {
                if (i == D_001A4CE8 - 1) {
                    D_001A4CE8 = i;
                } else {
                    D_001A4CE8 = D_001A4CE8 - 1;
                    D_001ECD00[i].w0 = D_001ECD00[D_001A4CE8].w0;
                    D_001ECD00[i].w8 = D_001ECD00[D_001A4CE8].w8;
                    D_001ECD00[i].wC = D_001ECD00[D_001A4CE8].wC;
                    D_001ECD00[i].w10 = D_001ECD00[D_001A4CE8].w10;
                    D_001ECD00[i].w14 = D_001ECD00[D_001A4CE8].w14;
                }
            }
        }
    }
}
