/* LEVEL_03:0x194D80 -- turns the record's four stored offsets into pointers inside the loaded data (failing when one is missing), then marks the object, lowers the linked node's level by a step that depends on the toggle flag and flips the flag. */
typedef struct {
    char pad0[0x34];
    float f34;
} Node;

typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
} Rec;

typedef struct {
    char pad0[0x54];
    Rec *rec;
    char pad58[0x64 - 0x58];
    unsigned int w64;
    char pad68[0x70 - 0x68];
    float f70;
    char pad74[0x77 - 0x74];
    unsigned char b77;
} Obj;

extern char *D_0021F414;
extern unsigned char D_00221444;

static __inline__ int Fix(int *p)
{
    if (*p == 0)
        return 0;
    *p = (int)(D_0021F414 + *p);
    return 1;
}

int func_194D80(Obj *o)
{
    Rec *r = o->rec;

    if (!Fix(&r->w4))
        return 0;
    if (!Fix(&r->wC))
        return 0;
    if (!Fix(&r->w8))
        return 0;
    if (!Fix(&r->w0))
        return 0;
    o->b77 = 0x40;
    if (D_00221444 != 0) {
        ((Node *)r->w8)->f34 = ((Node *)r->w8)->f34 - 0.5f;
        o->f70 = 0.5f;
    } else {
        ((Node *)r->w8)->f34 = ((Node *)r->w8)->f34 - 0.25f;
        o->w64 |= 0x200000;
    }
    D_00221444 ^= 1;
    return 1;
}
