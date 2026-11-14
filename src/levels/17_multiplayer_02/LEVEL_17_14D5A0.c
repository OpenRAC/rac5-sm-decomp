/* LEVEL_17:0x14D5A0 -- placement copy of LEVEL_01_178D98.c: turns the record's stored offset into a pointer against the resource base when it is nonzero; reports whether it was. */
typedef struct { int offset; } Rec;
typedef struct { char pad_00[0x54]; Rec *rec; } Obj;

extern char *D_001A7EA4;

int func_14D5A0(Obj *o)
{
    Rec *r = o->rec;
    int off = r->offset;
    int ok;

    if (off == 0) {
        ok = 0;
    } else {
        r->offset = (int)(D_001A7EA4 + off);
        ok = 1;
    }
    return ok;
}
