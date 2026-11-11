/* LEVEL_18:0x17A710 -- stores a field of a looked-up record into the owner and reports success when it is nonzero. */

struct H17A710 {
    char pad00[0xA8];
    int fA8;
};

struct P54_17A710 {
    char pad00[0x30];
    int f30;
};

struct E17A710 {
    char pad00[0x30];
    char sub30[0x54 - 0x30];
    struct P54_17A710 *p54;
    struct H17A710 *p58;
};

struct R17A710 {
    char pad00[0x59C];
    int f59C;
};

extern struct R17A710 *func_111738(void *a, int b, int c);

int func_17A710(struct E17A710 *e)
{
    struct H17A710 *h;
    struct R17A710 *r;
    int v;

    h = e->p58;
    r = func_111738(e->sub30, e->p54->f30, 0);
    if (r == 0) {
        return 0;
    }
    v = r->f59C;
    if (v == 0) {
        return 0;
    }
    h->fA8 = v;
    return 1;
}
