/* LEVEL_07:0x1B7720 -- calls a setup helper, then passes each non-null entry of a four-slot table to a helper before one final call on the owner. */

void func_1B7790(void *a0);
void func_07E7F0(void *a0, int a1);

struct Obj {
    unsigned char pad00[0x54];
    void **p54;
};

void func_1B7720(struct Obj *a0)
{
    void **s0;
    unsigned int s2;

    s0 = a0->p54;
    func_1B7790(a0);
    s2 = 0;
    do {
        if (*s0 != 0) {
            func_07E7F0(*s0, 1);
        }
        s2++;
        s0++;
    } while (s2 < 4);
    func_07E7F0(a0, 1);
}
