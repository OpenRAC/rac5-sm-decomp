/* LEVEL_02:0x1D5238 -- runs seven rounds of two helper calls and returns one as soon as the second reports nonzero. */

void *func_1D9570(void *a0);
int func_08B060(void *a0, void *a1);

struct Inner {
    unsigned char pad00[0x30];
    void *p30;
};

struct Obj {
    unsigned char pad00[0x54];
    struct Inner *p54;
};

int func_1D5238(struct Obj *a0, unsigned char *a1)
{
    struct Inner *s2;
    unsigned int i;

    s2 = a0->p54;
    i = 0;
    do {
        if (func_08B060(a1, (unsigned char *)func_1D9570(s2->p30) + 0x30) != 0) {
            return 1;
        }
        i++;
    } while (i < 7);
    return 0;
}
