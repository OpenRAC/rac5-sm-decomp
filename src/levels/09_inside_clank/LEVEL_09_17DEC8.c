/* LEVEL_09:0x17DEC8 -- placement copy of LEVEL_06_17E010.c: checks the first matching item of a list against a probe. */
struct T { char p0[0x45]; unsigned char f45; char p1[0x54 - 0x46]; void **f54; };
struct B { char p0[0x50]; struct T *f50; void *f54; };
struct A { char p0[0x54]; struct B *f54; };
extern int func_0810E8(void *a, void *b);

int func_17DEC8(struct A *a0)
{
    struct B *b;
    struct T *s2;
    void *s3;
    unsigned int s1;
    unsigned int i;

    b = a0->f54;
    s2 = b->f50;
    if (s2 == 0) {
        return 0;
    }
    s3 = b->f54;
    if (s3 == 0) {
        return 0;
    }
    s1 = s2->f45;
    for (i = 0; i < s1; i++) {
        if (func_0810E8(s3, (char *)*(void **)((char *)s2->f54 + (i << 2)) + 0x30) != 0) {
            return 1;
        }
    }
    return 0;
}
