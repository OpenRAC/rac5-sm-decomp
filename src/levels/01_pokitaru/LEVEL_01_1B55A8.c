/* LEVEL_01:0x1B55A8 -- clears the object's 0x27C-byte record, installs the shared table pointer, raises the ready flag and returns 1. */
extern void *memset(void *p, int c, unsigned int n);

struct Rec {
    char *f0;
};

struct Obj {
    char pad00[0x58];
    struct Rec *f58;
};

extern char D_00235140[];
extern unsigned char D_00208E2C;

int func_1B55A8(struct Obj *o)
{
    struct Rec *r = o->f58;

    memset(r, 0, 0x27C);
    r->f0 = D_00235140;
    D_00208E2C = 1;
    return 1;
}
