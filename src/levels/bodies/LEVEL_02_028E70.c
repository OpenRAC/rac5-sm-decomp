/* LEVEL_02:0x028E70 -- placement copy of LEVEL_01_028688.c: adds a key to a small fixed set unless it is already present or the set is full. */

struct Set028688 {
    unsigned int w[8];
    unsigned int count;
};

extern struct Set028688 D_00248440;

void func_028E70(int key)
{
    unsigned int i;
    unsigned int c;

    for (i = 0; i < D_00248440.count; i++) {
        if (key == D_00248440.w[i]) {
            return;
        }
    }
    c = D_00248440.count;
    if (c < 8) {
        D_00248440.w[c] = key;
        D_00248440.count = D_00248440.count + 1;
    }
}
