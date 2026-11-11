/* LEVEL_07:0x177708 -- placement copy of LEVEL_05_162498.c: converts the record's stored offsets into pointers (some kept only when their target is valid), flags the object when it is in state 1, clears its timers, and notifies the last target if it is valid. */
typedef struct {
    int f00;
    char pad04[8];
    int f0C;
    int f10;
    int f14;
    int f18;
} Rec;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    unsigned char b46;
    char pad47[0xD];
    Rec *rec;
    char pad58[0xC];
    int flags;
    char pad68[8];
    float f70;
} Obj;

extern int D_0021B094;
extern void func_178540(char *object, char *member, int value);

int func_177708(Obj *o)
{
    Rec *rec = o->rec;
    int t;
    int ok;

    if (rec->f00 != 0) {
        rec->f00 = D_0021B094 + rec->f00;
    }
    if (rec->f0C != 0) {
        rec->f0C = D_0021B094 + rec->f0C;
    }
    if (rec->f14 != 0) {
        t = D_0021B094 + rec->f14;
        if (*(int *)(t + 0x40) == 0) {
            rec->f14 = 0;
        } else {
            rec->f14 = t;
        }
    }
    if (rec->f18 != 0) {
        t = D_0021B094 + rec->f18;
        if (*(int *)(t + 0x40) == 0) {
            rec->f18 = 0;
        } else {
            rec->f18 = t;
        }
    }
    if (o->state == 1) {
        o->flags = o->flags | 0x10;
    }
    o->f70 = 0.0f;
    o->b46 = 0;
    if (rec->f10 == 0) {
        ok = 0;
    } else {
        t = D_0021B094 + rec->f10;
        if (*(int *)(t + 0x40) == 0) {
            rec->f10 = 0;
            ok = 0;
        } else {
            rec->f10 = t;
            ok = 1;
        }
    }
    if (ok) {
        func_178540((char *)rec->f10, (char *)o, 0);
    }
    return 1;
}
