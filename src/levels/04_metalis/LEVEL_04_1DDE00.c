/* LEVEL_04:0x1DDE00 -- visits the first two entries of a pointer table after the head slot and releases each present entry with a fixed argument. */

struct Elem {
    char pad_00[0x45];
    unsigned char b_45;
};

struct Obj {
    char pad_00[0x58];
    struct Elem **p_58;
};

int func_163018(struct Elem *a0, int a1, int a2);

void func_1DDE00(struct Obj *a0)
{
    struct Elem **p;
    struct Elem *e;
    unsigned int n;

    n = 0;
    p = a0->p_58 + 1;
    do {
        e = *p++;
        if (e != 0) {
            func_163018(e, e->b_45, 8);
        }
        n++;
    } while (n < 2);
}
