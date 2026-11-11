/* LEVEL_21:0x0D1170 -- placement copy of LEVEL_01_105A98.c: credits a weighted amount to a matching channel slot, starting the slot first when it does not already hold the same request. */

struct Slot105A98 {
    char pad_00[0x0A];
    unsigned short h_0A;
};

extern int D_0014B0F4;
extern int D_001650F8[];
extern int D_001B4648[];
extern int D_001B4650[];
extern struct Slot105A98 *D_001B4658[];
extern int D_001B4668[];
extern int D_001B4670[];
extern int D_001B4678[];

int func_07C908(int a, int b, int c, int d, int e, int f, unsigned int g);

void func_0D1170(int amount, int key)
{
    int st = 6;
    unsigned int i;
    int bit;
    int w;

    for (i = 0; i < 1; i++) {
        bit = 1 << i;
        if (D_0014B0F4 & bit) {
            if (key == D_001B4668[i] && D_001B4670[i] == 0 && st == D_001B4678[i]) {
                D_001B4658[i]->h_0A += amount;
            } else if (func_07C908(D_001B4648[i], amount, key, 6, 0, 0, i) == 0) {
                return;
            }
            w = D_001650F8[(key >> 2) & 15];
            D_001B4668[i] = key;
            D_001B4670[i] = 0;
            D_001B4678[i] = st;
            D_001B4648[i] += amount * w;
            D_001B4650[i] -= amount * w;
        }
    }
}
