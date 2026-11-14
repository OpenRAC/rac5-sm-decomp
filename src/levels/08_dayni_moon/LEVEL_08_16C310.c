/* LEVEL_08:0x16C310 -- placement copy of LEVEL_04_165580.c: sets the object's marker byte, runs the helper, switches state to 1, clears the three flag bytes of the linked record and returns 1. */
typedef struct Rec {
    unsigned char b0;
    unsigned char b1;
    unsigned char b2;
} Rec;

typedef struct Obj {
    char pad_00[0x46];
    unsigned char b46;
    char pad_47[0x11];
    Rec *rec;
    char pad_5C[0x1A];
    unsigned char b76;
} Obj;

extern void func_0DF4E8(Obj *o);

int func_16C310(Obj *o)
{
    Rec *rec;

    o->b76 = 0x27;
    func_0DF4E8(o);
    o->b46 = 1;
    rec = o->rec;
    rec->b0 = 0;
    rec->b1 = 0;
    rec->b2 = 0;
    return 1;
}
