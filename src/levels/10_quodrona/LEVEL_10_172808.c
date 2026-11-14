/* LEVEL_10:0x172808 -- clears the record's fields and copies one float, relocates the stored offset into a pointer and sets the object's flags accordingly; returns 1. */
typedef struct {
    int w00;
    char pad04[0x34 - 4];
    int w34;
    float f38;
    int w3C;
} Rec;

typedef struct {
    char pad00[0x34];
    float f34;
    char pad38[0x45 - 0x38];
    unsigned char b45;
    char pad46[0x54 - 0x46];
    int *p54;
    Rec *rec;
    char pad5C[0x64 - 0x5C];
    unsigned int flags;
} Obj;

extern int D_0020F9F4;

int func_172808(Obj *o)
{
    Rec *rec = o->rec;
    int *p = o->p54;
    int a;
    int ok;

    rec->w00 = 0;
    rec->w34 = 0;
    rec->f38 = o->f34;
    rec->w3C = 0;
    a = *p;
    if (a == 0) {
        ok = 0;
    } else {
        *p = D_0020F9F4 + a;
        ok = 1;
    }
    if (ok) {
        o->b45 = 0;
        o->flags |= 0x20;
    } else {
        o->b45 = 1;
    }
    return 1;
}
