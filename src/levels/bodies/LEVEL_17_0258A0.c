/* LEVEL_17:0x0258A0 -- placement copy of LEVEL_01_028350.c: counts the hits of a predicate over a run of byte slots taken from a size table. */

extern const unsigned int D_001B50D8[];
extern int func_0248D0(unsigned int a, unsigned int b);

int func_0258A0(unsigned int n) {
    unsigned int count;
    unsigned int next;
    unsigned int x0;
    unsigned int x;
    unsigned int arg;
    int hit;

    n = n - 1;
    count = 0;
    x0 = (n & 1) << 2;
    arg = (n >> 1) + 0x84;
    for (x = x0; x < x0 + D_001B50D8[n]; x++) {
        hit = func_0248D0(arg, x & 0xFF);
        next = count + 1;
        if (hit) {
            count = next;
        }
    }
    return count;
}
