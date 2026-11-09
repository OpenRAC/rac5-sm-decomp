/* LEVEL_23:0x0F8980 -- placement copy of LEVEL_01_105A98.c: credits a weighted amount to a matching channel slot, starting the slot first when it does not already hold the same request. */

struct Slot105A98 {
    char pad_00[0x0A];
    unsigned short h_0A;
};

extern int D_001C9874;
extern int D_001E3AF8[];
extern int D_0026DA48[];
extern int D_0026DA50[];
extern struct Slot105A98 *D_0026DA58[];
extern int D_0026DA68[];
extern int D_0026DA70[];
extern int D_0026DA78[];

int func_08E2F8(int a, int b, int c, int d, int e, int f, unsigned int g);

void func_0F8980(int amount, int key)
{
    int st = 6;
    unsigned int i;
    int bit;
    int w;

    for (i = 0; i < 1; i++) {
        bit = 1 << i;
        if (D_001C9874 & bit) {
            if (key == D_0026DA68[i] && D_0026DA70[i] == 0 && st == D_0026DA78[i]) {
                D_0026DA58[i]->h_0A += amount;
            } else if (func_08E2F8(D_0026DA48[i], amount, key, 6, 0, 0, i) == 0) {
                return;
            }
            w = D_001E3AF8[(key >> 2) & 15];
            D_0026DA68[i] = key;
            D_0026DA70[i] = 0;
            D_0026DA78[i] = st;
            D_0026DA48[i] += amount * w;
            D_0026DA50[i] -= amount * w;
        }
    }
}
