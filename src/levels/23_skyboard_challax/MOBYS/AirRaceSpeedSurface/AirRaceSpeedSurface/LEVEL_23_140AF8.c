/* LEVEL_23:0x140AF8 -- placement copy of LEVEL_22_1177A0.c: when the object exists and is in state 1, runs its update helpers and clears the pending flag after a flush. */
typedef struct { char pad_00[0x10D]; unsigned char pending; } State;
typedef struct { char pad_00[0x45]; unsigned char state; char pad_46[0x58 - 0x46]; State *st; } Obj;

extern void func_140CC8(void);
extern void func_140B68(Obj *o);
extern void func_1412E8(Obj *o);
extern void func_1410B0(Obj *o);

void func_140AF8(Obj *o)
{
    State *st = o->st;

    if (o != 0) {
        func_140CC8();
        if (o->state == 1) {
            func_140B68(o);
            if (st->pending != 0) {
                func_1412E8(o);
                st->pending = 0;
            }
            func_1410B0(o);
        }
    }
}
