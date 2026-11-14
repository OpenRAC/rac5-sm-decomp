/* LEVEL_22:0x1177A0 -- when the object exists and is in state 1, runs its update helpers and clears the pending flag after a flush. */
typedef struct { char pad_00[0x10D]; unsigned char pending; } State;
typedef struct { char pad_00[0x45]; unsigned char state; char pad_46[0x58 - 0x46]; State *st; } Obj;

extern void func_117970(void);
extern void func_117810(Obj *o);
extern void func_117F90(Obj *o);
extern void func_117D58(Obj *o);

void func_1177A0(Obj *o)
{
    State *st = o->st;

    if (o != 0) {
        func_117970();
        if (o->state == 1) {
            func_117810(o);
            if (st->pending != 0) {
                func_117F90(o);
                st->pending = 0;
            }
            func_117D58(o);
        }
    }
}
