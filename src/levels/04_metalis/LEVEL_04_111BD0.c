/* LEVEL_04:0x111BD0 -- placement copy of LEVEL_01_105A98.c: credits a weighted amount to a matching channel slot, starting the slot first when it does not already hold the same request. */

struct Slot105A98 {
    char pad_00[0x0A];
    unsigned short h_0A;
};

extern int D_0020F934;
extern int D_0022A2F8[];
extern int D_002B6E08[];
extern int D_002B6E10[];
extern struct Slot105A98 *D_002B6E18[];
extern int D_002B6E28[];
extern int D_002B6E30[];
extern int D_002B6E38[];

int func_09BA78(int a, int b, int c, int d, int e, int f, unsigned int g);

void func_111BD0(int amount, int key)
{
    int st = 6;
    unsigned int i;
    int bit;
    int w;

    for (i = 0; i < 1; i++) {
        bit = 1 << i;
        if (D_0020F934 & bit) {
            if (key == D_002B6E28[i] && D_002B6E30[i] == 0 && st == D_002B6E38[i]) {
                D_002B6E18[i]->h_0A += amount;
            } else if (func_09BA78(D_002B6E08[i], amount, key, 6, 0, 0, i) == 0) {
                return;
            }
            w = D_0022A2F8[(key >> 2) & 15];
            D_002B6E28[i] = key;
            D_002B6E30[i] = 0;
            D_002B6E38[i] = st;
            D_002B6E08[i] += amount * w;
            D_002B6E10[i] -= amount * w;
        }
    }
}
