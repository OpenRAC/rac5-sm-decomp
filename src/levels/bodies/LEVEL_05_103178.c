/* LEVEL_05:0x103178 -- placement copy of LEVEL_01_105A98.c: credits a weighted amount to a matching channel slot, starting the slot first when it does not already hold the same request. */

struct Slot105A98 {
    char pad_00[0x0A];
    unsigned short h_0A;
};

extern int D_001E57F4;
extern int D_001FF878[];
extern int D_002884C8[];
extern int D_002884D0[];
extern struct Slot105A98 *D_002884D8[];
extern int D_002884E8[];
extern int D_002884F0[];
extern int D_002884F8[];

int func_095FD0(int a, int b, int c, int d, int e, int f, unsigned int g);

void func_103178(int amount, int key)
{
    int st = 6;
    unsigned int i;
    int bit;
    int w;

    for (i = 0; i < 1; i++) {
        bit = 1 << i;
        if (D_001E57F4 & bit) {
            if (key == D_002884E8[i] && D_002884F0[i] == 0 && st == D_002884F8[i]) {
                D_002884D8[i]->h_0A += amount;
            } else if (func_095FD0(D_002884C8[i], amount, key, 6, 0, 0, i) == 0) {
                return;
            }
            w = D_001FF878[(key >> 2) & 15];
            D_002884E8[i] = key;
            D_002884F0[i] = 0;
            D_002884F8[i] = st;
            D_002884C8[i] += amount * w;
            D_002884D0[i] -= amount * w;
        }
    }
}
