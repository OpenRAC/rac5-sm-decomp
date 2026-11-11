/* LEVEL_08:0x116720 -- placement copy of LEVEL_01_105A98.c: credits a weighted amount to a matching channel slot, starting the slot first when it does not already hold the same request. */

struct Slot105A98 {
    char pad_00[0x0A];
    unsigned short h_0A;
};

extern int D_0023F334;
extern int D_0025A5F8[];
extern int D_002EB888[];
extern int D_002EB890[];
extern struct Slot105A98 *D_002EB898[];
extern int D_002EB8A8[];
extern int D_002EB8B0[];
extern int D_002EB8B8[];

int func_0A0A10(int a, int b, int c, int d, int e, int f, unsigned int g);

void func_116720(int amount, int key)
{
    int st = 6;
    unsigned int i;
    int bit;
    int w;

    for (i = 0; i < 1; i++) {
        bit = 1 << i;
        if (D_0023F334 & bit) {
            if (key == D_002EB8A8[i] && D_002EB8B0[i] == 0 && st == D_002EB8B8[i]) {
                D_002EB898[i]->h_0A += amount;
            } else if (func_0A0A10(D_002EB888[i], amount, key, 6, 0, 0, i) == 0) {
                return;
            }
            w = D_0025A5F8[(key >> 2) & 15];
            D_002EB8A8[i] = key;
            D_002EB8B0[i] = 0;
            D_002EB8B8[i] = st;
            D_002EB888[i] += amount * w;
            D_002EB890[i] -= amount * w;
        }
    }
}
