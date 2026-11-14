/* LEVEL_07:0x1C34B8 -- converts the record's stored offsets into pointers (four of them only when their target is valid) and runs the shared follow-up on the record. */
typedef struct {
    char pad00[0x2C];
    int f2C;
    int f30;
    int f34;
    int f38;
    char pad3C[4];
    int f40;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
} Obj;

struct Obj;

extern int D_0021B094;
extern void func_02FC08(struct Obj *a0);

void func_1C34B8(Obj *o)
{
    Rec *rec = o->rec;
    int a;
    int b;
    int c;
    int d;
    int e;
    int ta;
    int tb;
    int tc;
    int td;

    a = rec->f2C;
    if (a != 0) {
        ta = D_0021B094 + a;
        if (*(int *)(ta + 0x40) == 0) {
            rec->f2C = 0;
        } else {
            rec->f2C = ta;
        }
    }
    b = rec->f30;
    if (b != 0) {
        tb = D_0021B094 + b;
        if (*(int *)(tb + 0x40) == 0) {
            rec->f30 = 0;
        } else {
            rec->f30 = tb;
        }
    }
    c = rec->f38;
    if (c != 0) {
        tc = D_0021B094 + c;
        if (*(int *)(tc + 0x40) == 0) {
            rec->f38 = 0;
        } else {
            rec->f38 = tc;
        }
    }
    d = rec->f40;
    if (d != 0) {
        td = D_0021B094 + d;
        if (*(int *)(td + 0x40) == 0) {
            rec->f40 = 0;
        } else {
            rec->f40 = td;
        }
    }
    e = rec->f34;
    if (e != 0) {
        rec->f34 = D_0021B094 + e;
    }
    func_02FC08((struct Obj *)rec);
}
