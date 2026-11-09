/* LEVEL_03:0x104330 -- placement copy of LEVEL_01_105A98.c: credits a weighted amount to a matching channel slot, starting the slot first when it does not already hold the same request. */

struct Slot105A98 {
    char pad_00[0x0A];
    unsigned short h_0A;
};

extern int D_0020EAF4;
extern int D_00229878[];
extern int D_002B7488[];
extern int D_002B7490[];
extern struct Slot105A98 *D_002B7498[];
extern int D_002B74A8[];
extern int D_002B74B0[];
extern int D_002B74B8[];

int func_0986F8(int a, int b, int c, int d, int e, int f, unsigned int g);

void func_104330(int amount, int key)
{
    int st = 6;
    unsigned int i;
    int bit;
    int w;

    for (i = 0; i < 1; i++) {
        bit = 1 << i;
        if (D_0020EAF4 & bit) {
            if (key == D_002B74A8[i] && D_002B74B0[i] == 0 && st == D_002B74B8[i]) {
                D_002B7498[i]->h_0A += amount;
            } else if (func_0986F8(D_002B7488[i], amount, key, 6, 0, 0, i) == 0) {
                return;
            }
            w = D_00229878[(key >> 2) & 15];
            D_002B74A8[i] = key;
            D_002B74B0[i] = 0;
            D_002B74B8[i] = st;
            D_002B7488[i] += amount * w;
            D_002B7490[i] -= amount * w;
        }
    }
}
