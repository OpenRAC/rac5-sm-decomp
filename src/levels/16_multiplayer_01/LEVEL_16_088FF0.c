/* LEVEL_16:0x088FF0 -- updates the maxima of two records' fields, halving two inputs with sign correction. */

struct R088FF0 {
    char pad00[0x08];
    int f08;
    char pad0C[0x14 - 0x0C];
    int f14;
    char pad18[0x30 - 0x18];
    int f30;
    char pad34[0x76 - 0x34];
    unsigned char b76;
    char pad77[0x170C - 0x77];
};

extern struct R088FF0 D_00251338[2];

void func_088FF0(int a0, int a1, int a2)
{
    unsigned int c;
    int h1;
    int h2;

    h1 = a1 / 2;
    h2 = a2 / 2;
    for (c = 0; c < 2; c++) {
        if (D_00251338[c].b76 == 0) {
            if (D_00251338[c].f30 < a0) {
                D_00251338[c].f30 = a0;
            }
            if (D_00251338[c].f08 < h1) {
                D_00251338[c].f08 = h1;
            }
            if (D_00251338[c].f14 < h2) {
                D_00251338[c].f14 = h2;
            }
        }
    }
}
