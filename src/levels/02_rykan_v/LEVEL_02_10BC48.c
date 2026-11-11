/* LEVEL_02:0x10BC48 -- placement copy of LEVEL_01_105A98.c: credits a weighted amount to a matching channel slot, starting the slot first when it does not already hold the same request. */

struct Slot105A98 {
    char pad_00[0x0A];
    unsigned short h_0A;
};

extern int D_0020B434;
extern int D_002258F8[];
extern int D_002B3B08[];
extern int D_002B3B10[];
extern struct Slot105A98 *D_002B3B18[];
extern int D_002B3B28[];
extern int D_002B3B30[];
extern int D_002B3B38[];

int func_09F040(int a, int b, int c, int d, int e, int f, unsigned int g);

void func_10BC48(int amount, int key)
{
    int st = 6;
    unsigned int i;
    int bit;
    int w;

    for (i = 0; i < 1; i++) {
        bit = 1 << i;
        if (D_0020B434 & bit) {
            if (key == D_002B3B28[i] && D_002B3B30[i] == 0 && st == D_002B3B38[i]) {
                D_002B3B18[i]->h_0A += amount;
            } else if (func_09F040(D_002B3B08[i], amount, key, 6, 0, 0, i) == 0) {
                return;
            }
            w = D_002258F8[(key >> 2) & 15];
            D_002B3B28[i] = key;
            D_002B3B30[i] = 0;
            D_002B3B38[i] = st;
            D_002B3B08[i] += amount * w;
            D_002B3B10[i] -= amount * w;
        }
    }
}
