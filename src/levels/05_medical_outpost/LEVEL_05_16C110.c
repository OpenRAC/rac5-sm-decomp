/* LEVEL_05:0x16C110 -- placement copy of LEVEL_01_178D98.c: turns the record's stored offset into a pointer against the resource base when it is nonzero; reports whether it was. */
typedef struct { int offset; } Rec;
typedef struct { char pad_00[0x54]; Rec *rec; } Obj;

extern char *D_001F5E14;

int func_16C110(Obj *o)
{
    Rec *r = o->rec;
    int off = r->offset;
    int ok;

    if (off == 0) {
        ok = 0;
    } else {
        r->offset = (int)(D_001F5E14 + off);
        ok = 1;
    }
    return ok;
}
