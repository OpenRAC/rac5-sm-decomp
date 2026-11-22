/* LEVEL_02:0x036388 -- releases every non-null slot in each of two three-slot groups. */
struct A { char p0[0x58]; char *f58; };
extern void func_073880(void *a);
extern void func_073348(void *a);

void func_036388(struct A *a0)
{
    void **base;
    void **p;
    unsigned int k;
    unsigned int i;
    unsigned int j;
    unsigned int n;

    base = (void **)(a0->f58 + 0x90);
    for (i = 0; i < 2; i = n) {
        j = 0;
        n = i + 1;
        k = 3 * i;
        p = (void **)(k * 4 + (int)base);
        for (; j < 3; j++) {
            if (*p != 0) {
                func_073880(*p);
                func_073348(*p);
                *p = 0;
            }
            p++;
        }
    }
}
