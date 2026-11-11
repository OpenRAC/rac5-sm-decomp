/* LEVEL_01:0x105A98 -- credits a weighted amount to a matching channel slot, starting the slot first when it does not already hold the same request. */

struct Slot105A98 {
    char pad_00[0x0A];
    unsigned short h_0A;
};

extern int D_001F6474;
extern int D_00210978[];
extern int D_0029C608[];
extern int D_0029C610[];
extern struct Slot105A98 *D_0029C618[];
extern int D_0029C628[];
extern int D_0029C630[];
extern int D_0029C638[];

int func_098970(int a, int b, int c, int d, int e, int f, unsigned int g);

void func_105A98(int amount, int key)
{
    int st = 6;
    unsigned int i;
    int bit;
    int w;

    for (i = 0; i < 1; i++) {
        bit = 1 << i;
        if (D_001F6474 & bit) {
            if (key == D_0029C628[i] && D_0029C630[i] == 0 && st == D_0029C638[i]) {
                D_0029C618[i]->h_0A += amount;
            } else if (func_098970(D_0029C608[i], amount, key, 6, 0, 0, i) == 0) {
                return;
            }
            w = D_00210978[(key >> 2) & 15];
            D_0029C628[i] = key;
            D_0029C630[i] = 0;
            D_0029C638[i] = st;
            D_0029C608[i] += amount * w;
            D_0029C610[i] -= amount * w;
        }
    }
}
