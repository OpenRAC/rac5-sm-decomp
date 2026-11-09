/* LEVEL_03:0x1A24F0 -- picks one of two pointer tables, then calls two helpers per entry over six entries. */

extern void func_1A5B08(void *p);
extern void func_1A5B88(void *p);

void func_1A24F0(unsigned char *a0)
{
    unsigned char *v;
    unsigned char *t0;
    unsigned char *t1;
    void **s0;
    void **s1;
    unsigned int n;

    v = *(unsigned char **)(a0 + 0x54);
    v[0xB1] = 0;
    if (v[0x9F] == 0) {
        t0 = v + 0xF8;
        t1 = v + 0xE0;
    } else {
        t0 = v + 0xE0;
        t1 = v + 0xF8;
    }
    s1 = (void **)t1;
    s0 = (void **)t0;
    n = 0;
    do {
        n++;
        func_1A5B08(*s0);
        s0++;
        func_1A5B88(*s1);
        s1++;
    } while (n < 6);
}
