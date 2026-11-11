/* LEVEL_24:0x074B68 -- placement copy of LEVEL_01_07A400.c: drops stale table entries by moving the last entry into their slot. */
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
extern int D_001C6DA0;
extern int D_001C4C38;
extern unsigned int D_001C6D98;
extern Ent D_002063B0[];

void func_074B68(void)
{
    unsigned int i;

    if (D_001C6DA0 != D_001C4C38) {
        for (i = 0; i < D_001C6D98; i++) {
            if (D_002063B0[i].w14 == 3 || D_002063B0[i].w0 == 0 || (D_002063B0[i].w0->w64 & 0xF) != 1) {
                if (i == D_001C6D98 - 1) {
                    D_001C6D98 = i;
                } else {
                    D_001C6D98 = D_001C6D98 - 1;
                    D_002063B0[i].w0 = D_002063B0[D_001C6D98].w0;
                    D_002063B0[i].w8 = D_002063B0[D_001C6D98].w8;
                    D_002063B0[i].wC = D_002063B0[D_001C6D98].wC;
                    D_002063B0[i].w10 = D_002063B0[D_001C6D98].w10;
                    D_002063B0[i].w14 = D_002063B0[D_001C6D98].w14;
                }
            }
        }
    }
}
