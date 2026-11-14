/* LEVEL_07:0x1CCDF0 -- placement copy of LEVEL_01_1B55A8.c: clears the object's 0x27C-byte record, installs the shared table pointer, raises the ready flag and returns 1. */
extern void *memset(void *p, int c, unsigned int n);

struct Rec {
    char *f0;
};

struct Obj {
    char pad00[0x58];
    struct Rec *f58;
};

extern char D_0024AA40[];
extern unsigned char D_0021DADC;

int func_1CCDF0(struct Obj *o)
{
    struct Rec *r = o->f58;

    memset(r, 0, 0x27C);
    r->f0 = D_0024AA40;
    D_0021DADC = 1;
    return 1;
}
