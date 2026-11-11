/* LEVEL_07:0x198A58 -- converts three stored offsets of the record into pointers (the first and the last are kept only when their target is valid); returns 1 on success, 0 otherwise. */
typedef struct {
    int f0;
    int f4;
    int f8;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
} Obj;

extern int D_0021B094;

int func_198A58(Obj *o)
{
    Rec *rec = o->rec;
    int a;
    int b;
    int c;
    int ok1;
    int ok2;
    int t;

    a = rec->f4;
    if (a == 0) {
        ok1 = 0;
    } else {
        t = D_0021B094 + a;
        if (*(int *)(t + 0x40) == 0) {
            rec->f4 = 0;
            ok1 = 0;
        } else {
            rec->f4 = t;
            ok1 = 1;
        }
    }
    if (!ok1) {
        return 0;
    }
    b = rec->f8;
    if (b == 0) {
        ok2 = 0;
    } else {
        rec->f8 = D_0021B094 + b;
        ok2 = 1;
    }
    if (!ok2) {
        return 0;
    }
    c = rec->f0;
    if (c == 0) {
        return 0;
    }
    t = D_0021B094 + c;
    if (*(int *)(t + 0x40) != 0) {
        rec->f0 = t;
        return 1;
    }
    rec->f0 = 0;
    return 0;
}
