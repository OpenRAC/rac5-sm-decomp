/* LEVEL_08:0x081C88 -- placement copy of LEVEL_01_07A400.c: drops stale table entries by moving the last entry into their slot. */
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
extern int D_0023EFE0;
extern int D_0023CB38;
extern unsigned int D_0023EFD8;
extern Ent D_00289740[];

void func_081C88(void)
{
    unsigned int i;

    if (D_0023EFE0 != D_0023CB38) {
        for (i = 0; i < D_0023EFD8; i++) {
            if (D_00289740[i].w14 == 3 || D_00289740[i].w0 == 0 || (D_00289740[i].w0->w64 & 0xF) != 1) {
                if (i == D_0023EFD8 - 1) {
                    D_0023EFD8 = i;
                } else {
                    D_0023EFD8 = D_0023EFD8 - 1;
                    D_00289740[i].w0 = D_00289740[D_0023EFD8].w0;
                    D_00289740[i].w8 = D_00289740[D_0023EFD8].w8;
                    D_00289740[i].wC = D_00289740[D_0023EFD8].wC;
                    D_00289740[i].w10 = D_00289740[D_0023EFD8].w10;
                    D_00289740[i].w14 = D_00289740[D_0023EFD8].w14;
                }
            }
        }
    }
}
