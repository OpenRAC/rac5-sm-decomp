/* LEVEL_22:0x12AA18 -- placement copy of LEVEL_01_17CA68.c: clears the first three words of the object's record, initialises the record's sub-block from a fixed table, resets the state byte, sets a flag bit and returns 1. */
typedef struct Rec {
    int w0;
    int w4;
    int w8;
    char pad_0C[4];
    char sub[1];
} Rec;

typedef struct Obj {
    char pad_00[0x45];
    unsigned char b45;
    char pad_46[0x12];
    Rec *rec;
    char pad_5C[8];
    unsigned int flags;
} Obj;

extern char D_0016CA08[];
extern int func_06AFD0(char *sub, int a, int b, int c, char *table);

int func_12AA18(Obj *o)
{
    Rec *r = o->rec;

    r->w0 = 0;
    r->w4 = 0;
    r->w8 = 0;
    func_06AFD0(r->sub, 0, 0x44, 0x45, D_0016CA08);
    o->b45 = 0;
    o->flags |= 0x40000;
    return 1;
}
