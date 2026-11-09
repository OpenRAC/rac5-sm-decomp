/* LEVEL_09:0x101978 -- placement copy of LEVEL_01_105A98.c: credits a weighted amount to a matching channel slot, starting the slot first when it does not already hold the same request. */

struct Slot105A98 {
    char pad_00[0x0A];
    unsigned short h_0A;
};

extern int D_001E0274;
extern int D_001FA578[];
extern int D_00283D88[];
extern int D_00283D90[];
extern struct Slot105A98 *D_00283D98[];
extern int D_00283DA8[];
extern int D_00283DB0[];
extern int D_00283DB8[];

int func_095220(int a, int b, int c, int d, int e, int f, unsigned int g);

void func_101978(int amount, int key)
{
    int st = 6;
    unsigned int i;
    int bit;
    int w;

    for (i = 0; i < 1; i++) {
        bit = 1 << i;
        if (D_001E0274 & bit) {
            if (key == D_00283DA8[i] && D_00283DB0[i] == 0 && st == D_00283DB8[i]) {
                D_00283D98[i]->h_0A += amount;
            } else if (func_095220(D_00283D88[i], amount, key, 6, 0, 0, i) == 0) {
                return;
            }
            w = D_001FA578[(key >> 2) & 15];
            D_00283DA8[i] = key;
            D_00283DB0[i] = 0;
            D_00283DB8[i] = st;
            D_00283D88[i] += amount * w;
            D_00283D90[i] -= amount * w;
        }
    }
}
