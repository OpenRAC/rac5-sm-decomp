/* LEVEL_03:0x028568 -- placement copy of LEVEL_01_028688.c: adds a key to a small fixed set unless it is already present or the set is full. */

struct Set028688 {
    unsigned int w[8];
    unsigned int count;
};

extern struct Set028688 D_0024BDC0;

void func_028568(int key)
{
    unsigned int i;
    unsigned int c;

    for (i = 0; i < D_0024BDC0.count; i++) {
        if (key == D_0024BDC0.w[i]) {
            return;
        }
    }
    c = D_0024BDC0.count;
    if (c < 8) {
        D_0024BDC0.w[c] = key;
        D_0024BDC0.count = D_0024BDC0.count + 1;
    }
}
