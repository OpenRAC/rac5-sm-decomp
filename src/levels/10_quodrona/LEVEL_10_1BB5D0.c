/* LEVEL_10:0x1BB5D0 -- copies the object's sixteen-float block into its record (fields 8..11 first, then 0..7, then 12..15), clears a record word, sets a flag bit and returns 1. */
typedef struct {
    float f[16];
    int w40;
} Rec;

typedef struct {
    float f[16];
    char pad40[0x18];
    Rec *rec;
    char pad5C[8];
    unsigned int flags;
} Obj;

int func_1BB5D0(Obj *o)
{
    Rec *r = o->rec;

    r->f[8] = o->f[8];
    r->f[9] = o->f[9];
    r->f[10] = o->f[10];
    r->f[11] = o->f[11];
    r->f[0] = o->f[0];
    r->f[1] = o->f[1];
    r->f[2] = o->f[2];
    r->f[3] = o->f[3];
    r->f[4] = o->f[4];
    r->f[5] = o->f[5];
    r->f[6] = o->f[6];
    r->f[7] = o->f[7];
    r->f[12] = o->f[12];
    r->f[13] = o->f[13];
    r->f[14] = o->f[14];
    r->f[15] = o->f[15];
    r->w40 = 0;
    o->flags |= 0x80;
    return 1;
}
