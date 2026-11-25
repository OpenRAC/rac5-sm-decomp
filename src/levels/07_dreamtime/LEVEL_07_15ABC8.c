/* LEVEL_07:0x15ABC8 -- placement copy of LEVEL_05_151ED8.c: converts the record's stored offsets into pointers (two of them only when their target is valid), back-links the first one, registers the third with a callback, copies a byte into the object and resets its state according to the record's flags; returns 1 or 0. */
typedef struct {
    int f00;
    int f04;
    int f08;
    int f0C;
    int f10;
    int f14;
    char pad18[4];
    signed char b1C;
    char pad1D;
    unsigned char b1E;
    char pad1F[5];
    unsigned char b24;
} Rec;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0xE];
    Rec *rec;
    char pad58[0x1E];
    unsigned char b76;
} Obj;

extern int D_0021B094;
extern void func_15AEF0(void *p);
extern void func_178540(char *object, char *member, int value);

int func_15ABC8(Obj *o)
{
    Rec *rec = o->rec;
    int v;
    int t;
    int ok;
    int ok2;

    v = rec->f04;
    if (v != 0) {
        t = D_0021B094 + v;
        if (*(int *)(t + 0x40) == 0) {
            rec->f04 = 0;
        } else {
            rec->f04 = t;
        }
    }
    v = rec->f00;
    if (v == 0) {
        ok = 0;
    } else {
        t = D_0021B094 + v;
        if (*(int *)(t + 0x40) == 0) {
            rec->f00 = 0;
            ok = 0;
        } else {
            rec->f00 = t;
            ok = 1;
        }
    }
    if (!ok) {
        rec->f00 = (int)o;
    }
    v = rec->f10;
    if (v == 0) {
        ok2 = 0;
    } else {
        t = D_0021B094 + v;
        if (*(int *)(t + 0x40) == 0) {
            rec->f10 = 0;
            ok2 = 0;
        } else {
            rec->f10 = t;
            ok2 = 1;
        }
    }
    if (ok2) {
        func_178540((char *)rec->f10, (char *)o, (int)func_15AEF0);
    }
    v = rec->f08;
    if (v != 0) {
        rec->f08 = D_0021B094 + v;
    }
    v = rec->f0C;
    if (v != 0) {
        rec->f0C = D_0021B094 + v;
    }
    v = rec->f14;
    if (v != 0) {
        rec->f14 = D_0021B094 + v;
    }
    o->b76 = rec->b1E;
    if (rec->f08 == 0 && rec->f10 == 0 && rec->b1C == -1) {
        if (rec->b24 == 0) {
            return 0;
        }
    } else if (rec->b24 == 0) {
        o->state = 0;
        return 1;
    }
    if (rec->f04 == 0) {
        return 0;
    }
    o->state = 0;
    return 1;
}
