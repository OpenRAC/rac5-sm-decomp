/* LEVEL_01:0x028688 -- adds a key to a small fixed set unless it is already present or the set is full. */

struct Set028688 {
    unsigned int w[8];
    unsigned int count;
};

extern struct Set028688 D_00230F40;

void func_028688(int key)
{
    unsigned int i;
    unsigned int c;

    for (i = 0; i < D_00230F40.count; i++) {
        if (key == D_00230F40.w[i]) {
            return;
        }
    }
    c = D_00230F40.count;
    if (c < 8) {
        D_00230F40.w[c] = key;
        D_00230F40.count = D_00230F40.count + 1;
    }
}
