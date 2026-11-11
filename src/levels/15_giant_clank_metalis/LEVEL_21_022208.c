/* LEVEL_21:0x022208 -- placement copy of LEVEL_01_028350.c: counts the hits of a predicate over a run of byte slots taken from a size table. */

extern const unsigned int D_00161410[];
extern int func_0214A0(unsigned int a, unsigned int b);

int func_022208(unsigned int n) {
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
    for (x = x0; x < x0 + D_00161410[n]; x++) {
        hit = func_0214A0(arg, x & 0xFF);
        next = count + 1;
        if (hit) {
            count = next;
        }
    }
    return count;
}
