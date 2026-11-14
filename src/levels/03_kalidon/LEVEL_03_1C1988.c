/* LEVEL_03:0x1C1988 -- sets the object's flag bit, clears its two bytes and the record words, then stores the two result codes for the lookup keys in the shared state. */
typedef struct {
    int w0;
    int w4;
} Rec;

typedef struct {
    char pad0[0x54];
    Rec *rec;
    char pad58[0x64 - 0x58];
    unsigned int flags;
    char pad68[0x76 - 0x68];
    unsigned char b76;
    unsigned char b77;
} Obj;

typedef struct {
    char pad0[0xC];
    unsigned char b0C;
    unsigned char b0D;
} Shared;

extern int D_00221CF0[];
extern Shared D_0024BDB0;
extern void func_028740(void);
extern unsigned int func_027390(int index, unsigned int bit);
extern int func_082618(int *keys, int nkeys, char **out, unsigned int *idx);

int func_1C1988(Obj *o)
{
    Rec *r = o->rec;

    o->b76 = 0;
    o->b77 = 0;
    o->flags |= 0x20;
    func_028740();
    if (func_027390(0x78, 0) != 0) {
        D_0024BDB0.b0C = 0x40;
    } else {
        r->w4 = 0;
        r->w0 = 0;
        if (func_082618(D_00221CF0, 1, (char **)r, (unsigned int *)&r->w4) != 0)
            D_0024BDB0.b0C = 1;
        else
            D_0024BDB0.b0C = 0x40;
    }
    if (func_027390(0x78, 1) != 0)
        D_0024BDB0.b0D = 0x40;
    else
        D_0024BDB0.b0D = 1;
    return 1;
}
