/* LEVEL_10:0x105C70 -- placement copy of LEVEL_01_105A98.c: credits a weighted amount to a matching channel slot, starting the slot first when it does not already hold the same request. */

struct Slot105A98 {
    char pad_00[0x0A];
    unsigned short h_0A;
};

extern int D_001FF474;
extern int D_002198F8[];
extern int D_002A5A08[];
extern int D_002A5A10[];
extern struct Slot105A98 *D_002A5A18[];
extern int D_002A5A28[];
extern int D_002A5A30[];
extern int D_002A5A38[];

int func_098E38(int a, int b, int c, int d, int e, int f, unsigned int g);

void func_105C70(int amount, int key)
{
    int st = 6;
    unsigned int i;
    int bit;
    int w;

    for (i = 0; i < 1; i++) {
        bit = 1 << i;
        if (D_001FF474 & bit) {
            if (key == D_002A5A28[i] && D_002A5A30[i] == 0 && st == D_002A5A38[i]) {
                D_002A5A18[i]->h_0A += amount;
            } else if (func_098E38(D_002A5A08[i], amount, key, 6, 0, 0, i) == 0) {
                return;
            }
            w = D_002198F8[(key >> 2) & 15];
            D_002A5A28[i] = key;
            D_002A5A30[i] = 0;
            D_002A5A38[i] = st;
            D_002A5A08[i] += amount * w;
            D_002A5A10[i] -= amount * w;
        }
    }
}
