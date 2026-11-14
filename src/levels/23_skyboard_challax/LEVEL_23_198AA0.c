/* LEVEL_23:0x198AA0 -- placement copy of LEVEL_01_1B55A8.c: clears the object's 0x27C-byte record, installs the shared table pointer, raises the ready flag and returns 1. */
extern void *memset(void *p, int c, unsigned int n);

struct Rec {
    char *f0;
};

struct Obj {
    char pad00[0x58];
    struct Rec *f58;
};

extern char D_002025C0[];
extern unsigned char D_001DC23C;

int func_198AA0(struct Obj *o)
{
    struct Rec *r = o->f58;

    memset(r, 0, 0x27C);
    r->f0 = D_002025C0;
    D_001DC23C = 1;
    return 1;
}
