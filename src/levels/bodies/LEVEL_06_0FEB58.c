/* LEVEL_06:0x0FEB58 -- placement copy of LEVEL_01_105A98.c: credits a weighted amount to a matching channel slot, starting the slot first when it does not already hold the same request. */

struct Slot105A98 {
    char pad_00[0x0A];
    unsigned short h_0A;
};

extern int D_001E5374;
extern int D_001FF7F8[];
extern int D_00289388[];
extern int D_00289390[];
extern struct Slot105A98 *D_00289398[];
extern int D_002893A8[];
extern int D_002893B0[];
extern int D_002893B8[];

int func_091680(int a, int b, int c, int d, int e, int f, unsigned int g);

void func_0FEB58(int amount, int key)
{
    int st = 6;
    unsigned int i;
    int bit;
    int w;

    for (i = 0; i < 1; i++) {
        bit = 1 << i;
        if (D_001E5374 & bit) {
            if (key == D_002893A8[i] && D_002893B0[i] == 0 && st == D_002893B8[i]) {
                D_00289398[i]->h_0A += amount;
            } else if (func_091680(D_00289388[i], amount, key, 6, 0, 0, i) == 0) {
                return;
            }
            w = D_001FF7F8[(key >> 2) & 15];
            D_002893A8[i] = key;
            D_002893B0[i] = 0;
            D_002893B8[i] = st;
            D_00289388[i] += amount * w;
            D_00289390[i] -= amount * w;
        }
    }
}
