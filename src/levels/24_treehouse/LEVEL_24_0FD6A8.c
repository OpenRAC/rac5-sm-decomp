/* LEVEL_24:0x0FD6A8 -- placement copy of LEVEL_01_105A98.c: credits a weighted amount to a matching channel slot, starting the slot first when it does not already hold the same request. */

struct Slot105A98 {
    char pad_00[0x0A];
    unsigned short h_0A;
};

extern int D_001C70F4;
extern int D_001E16F8[];
extern int D_002684C8[];
extern int D_002684D0[];
extern struct Slot105A98 *D_002684D8[];
extern int D_002684E8[];
extern int D_002684F0[];
extern int D_002684F8[];

int func_0918C8(int a, int b, int c, int d, int e, int f, unsigned int g);

void func_0FD6A8(int amount, int key)
{
    int st = 6;
    unsigned int i;
    int bit;
    int w;

    for (i = 0; i < 1; i++) {
        bit = 1 << i;
        if (D_001C70F4 & bit) {
            if (key == D_002684E8[i] && D_002684F0[i] == 0 && st == D_002684F8[i]) {
                D_002684D8[i]->h_0A += amount;
            } else if (func_0918C8(D_002684C8[i], amount, key, 6, 0, 0, i) == 0) {
                return;
            }
            w = D_001E16F8[(key >> 2) & 15];
            D_002684E8[i] = key;
            D_002684F0[i] = 0;
            D_002684F8[i] = st;
            D_002684C8[i] += amount * w;
            D_002684D0[i] -= amount * w;
        }
    }
}
