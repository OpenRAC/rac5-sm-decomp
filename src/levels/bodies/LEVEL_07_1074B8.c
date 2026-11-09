/* LEVEL_07:0x1074B8 -- placement copy of LEVEL_01_105A98.c: credits a weighted amount to a matching channel slot, starting the slot first when it does not already hold the same request. */

struct Slot105A98 {
    char pad_00[0x0A];
    unsigned short h_0A;
};

extern int D_0020A774;
extern int D_00225678[];
extern int D_002B1F08[];
extern int D_002B1F10[];
extern struct Slot105A98 *D_002B1F18[];
extern int D_002B1F28[];
extern int D_002B1F30[];
extern int D_002B1F38[];

int func_09A950(int a, int b, int c, int d, int e, int f, unsigned int g);

void func_1074B8(int amount, int key)
{
    int st = 6;
    unsigned int i;
    int bit;
    int w;

    for (i = 0; i < 1; i++) {
        bit = 1 << i;
        if (D_0020A774 & bit) {
            if (key == D_002B1F28[i] && D_002B1F30[i] == 0 && st == D_002B1F38[i]) {
                D_002B1F18[i]->h_0A += amount;
            } else if (func_09A950(D_002B1F08[i], amount, key, 6, 0, 0, i) == 0) {
                return;
            }
            w = D_00225678[(key >> 2) & 15];
            D_002B1F28[i] = key;
            D_002B1F30[i] = 0;
            D_002B1F38[i] = st;
            D_002B1F08[i] += amount * w;
            D_002B1F10[i] -= amount * w;
        }
    }
}
