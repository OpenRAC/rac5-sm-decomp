/* LEVEL_05:0x1525E8 -- placement copy of LEVEL_01_158C38.c: counts the timer down; while it runs, steps the record's tick byte and at five ticks raises a flag bit on the record's owner and resets the tick, otherwise runs the follow-up; with no time left it requests mode 1. */
typedef struct Owner {
    char pad_00[0x960];
    unsigned long long flags;
} Owner;

typedef struct Rec {
    Owner *owner;
    char pad_04[0x2CC - 4];
    unsigned char tick;
} Rec;

typedef struct Obj {
    char pad_00[0x58];
    Rec *rec;
    char pad_5C[0x14];
    float timer;
} Obj;

extern void func_079CF8(Obj *o, int mode);
extern void func_152688(Obj *o);
void func_1525E8(Obj *o)
{
    Rec *r;

    if (!(o->timer > 0.0f)) {
        func_079CF8(o, 1);
        return;
    }
    o->timer = o->timer - 1.0f;
        r = o->rec;
        r->tick = r->tick + 1;
        if ((signed char)r->tick >= 5) {
            r->owner->flags |= 0x40000000000ULL;
            r->tick = 0;
        } else {
            func_152688(o);
        }
}
