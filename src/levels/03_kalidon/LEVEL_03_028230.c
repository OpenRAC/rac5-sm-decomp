/* LEVEL_03:0x028230 -- placement copy of LEVEL_01_028350.c: counts the hits of a predicate over a run of byte slots taken from a size table. */

extern const unsigned int D_00225B90[];
extern int func_027390(unsigned int a, unsigned int b);

int func_028230(unsigned int n) {
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
    for (x = x0; x < x0 + D_00225B90[n]; x++) {
        hit = func_027390(arg, x & 0xFF);
        next = count + 1;
        if (hit) {
            count = next;
        }
    }
    return count;
}
