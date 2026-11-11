/* LEVEL_08:0x1C8938 -- clears the object's 0xA4-byte record, resets its flag byte, installs the shared table pointer and returns 1. */
extern void *memset(void *p, int c, unsigned int n);

struct Rec {
    char *f0;
    char pad04[0x9C];
    unsigned char bA0;
};

struct Obj {
    char pad00[0x58];
    struct Rec *f58;
};

extern char D_00272238[];

int func_1C8938(struct Obj *o)
{
    struct Rec *r = o->f58;

    memset(r, 0, 0xA4);
    r->bA0 = 0;
    r->f0 = D_00272238;
    return 1;
}
