/* LEVEL_04:0x1A3A78 -- points the object's sub-record at a fixed table, clears its fields, sets the object's float at +0x70 to 60.0f and returns 1. */
typedef struct {
    void *table;
    int w4;
    int w8;
    char pad_0C[0x28];
    unsigned char b34;
} Sub;

typedef struct {
    char pad00[0x58];
    Sub *sub;
    char pad5C[0x70 - 0x5C];
    float f70;
} Obj;

extern char D_0023E408[];

int func_1A3A78(Obj *o)
{
    Sub *s;

    s = o->sub;
    s->table = D_0023E408;
    s->w8 = 0;
    s->w4 = 0;
    s->b34 = 0;
    o->f70 = 60.0f;
    return 1;
}
