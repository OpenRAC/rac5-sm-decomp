/* LEVEL_07:0x0289E8 -- placement copy of LEVEL_01_028688.c: adds a key to a small fixed set unless it is already present or the set is full. */

struct Set028688 {
    unsigned int w[8];
    unsigned int count;
};

extern struct Set028688 D_00246840;

void func_0289E8(int key)
{
    unsigned int i;
    unsigned int c;

    for (i = 0; i < D_00246840.count; i++) {
        if (key == D_00246840.w[i]) {
            return;
        }
    }
    c = D_00246840.count;
    if (c < 8) {
        D_00246840.w[c] = key;
        D_00246840.count = D_00246840.count + 1;
    }
}
