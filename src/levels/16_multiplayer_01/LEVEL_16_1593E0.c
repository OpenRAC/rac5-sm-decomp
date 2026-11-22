/* LEVEL_16:0x1593E0 -- fails with -1 while the shared check holds; otherwise converts the record's two stored offsets into pointers (both must resolve to valid targets, else returns 0), resets two fields of the object's linked block, plays effect 0x15C when the second check passes and returns 1. */
typedef struct {
    int w00;
    int w04;
} Rec;

typedef struct {
    char pad000[0x1E0];
    unsigned char b1E0;
    char pad1E1[3];
    float f1E4;
} Held;

typedef struct {
    char pad00[0x54];
    Rec *rec;
    Held *held;
} Obj;

extern int D_001B48A4;
extern unsigned int func_112E00(void);
extern unsigned int func_112E38(void);
extern void func_0A5848(int first, int second);

int func_1593E0(Obj *o)
{
    Rec *rec;
    Held *held;
    int ok;
    int a;
    int b;
    int ta;
    int tb;

    if (func_112E00() != 0) {
        return -1;
    }
    rec = o->rec;
    a = rec->w00;
    if (a == 0) {
        ok = 0;
    } else {
        ta = D_001B48A4 + a;
        if (*(int *)(ta + 0x40) == 0) {
            rec->w00 = 0;
            ok = 0;
        } else {
            rec->w00 = ta;
            ok = 1;
        }
    }
    if (!ok) {
        return 0;
    }
    b = rec->w04;
    if (b == 0) {
        ok = 0;
    } else {
        tb = D_001B48A4 + b;
        if (*(int *)(tb + 0x40) == 0) {
            rec->w04 = 0;
            ok = 0;
        } else {
            rec->w04 = tb;
            ok = 1;
        }
    }
    if (!ok) {
        return 0;
    }
    held = o->held;
    held->b1E0 = 0;
    held->f1E4 = 240.0f;
    if (func_112E38() != 0) {
        func_0A5848(0x15C, 5);
    }
    return 1;
}
