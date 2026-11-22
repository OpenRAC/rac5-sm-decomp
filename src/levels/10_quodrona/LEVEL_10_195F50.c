/* LEVEL_10:0x195F50 -- placement copy of LEVEL_02_1ABC50.c: validates a record's pending request, relocates its four offset fields by the global base and arms a wait state for the object. */
typedef struct {
    int w00;
    int w04;
    int w08;
    int w0C;
    int w10;
    unsigned char b14;
    unsigned char b15;
} Rec;

typedef struct {
    char pad00[0x45];
    unsigned char b45;
    unsigned char b46;
    char pad47[0xD];
    Rec *rec;
    char pad58[0xC];
    unsigned int flags;
} Obj;

extern int D_00223780;
extern int D_00238C90;
extern int D_0020F9F4;
extern unsigned char D_003A0268[];

extern int func_026E08(int a, int b);

int func_195F50(Obj *o)
{
    Rec *r;
    int a;
    int t;
    int b;

    r = o->rec;
    if (r->b14 != 0) {
        a = D_00223780;
        b = o->b45;
        if (a == 0x16) {
            a = 3;
        } else if (a == 0x17) {
            a = 6;
        }
        if (func_026E08(a * 2 + 2, b) != 0) {
            return 0;
        }
    }
    if (r->w10 > 0) {
        if (r->w10 < D_00238C90) {
            return 0;
        }
        if (D_00238C90 == r->w10) {
            o->flags |= 0x200000;
        }
    }
    if (r->w04 != 0) {
        r->w04 = D_0020F9F4 + r->w04;
    }
    if (r->w00 != 0) {
        t = D_0020F9F4 + r->w00;
        if (*(int *)(t + 0x40) == 0) {
            r->w00 = 0;
        } else {
            r->w00 = t;
        }
    }
    if (r->w08 != 0) {
        t = D_0020F9F4 + r->w08;
        if (*(int *)(t + 0x40) == 0) {
            r->w08 = 0;
        } else {
            r->w08 = t;
        }
    }
    if (r->w0C != 0) {
        t = D_0020F9F4 + r->w0C;
        if (*(int *)(t + 0x40) == 0) {
            r->w0C = 0;
        } else {
            r->w0C = t;
        }
    }
    o->b46 = 0;
    if (D_003A0268[o->b45] != 0) {
        if (r->b15 == 0) {
            o->b46 = 4;
        }
    }
    return 1;
}
