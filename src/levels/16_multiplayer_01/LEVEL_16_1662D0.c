/* LEVEL_16:0x1662D0 -- per-frame state dispatcher for an object: runs the update steps that belong to its current state and advances state 5 to state 6 when the object is ready. */
typedef struct {
    char pad00[0x45];
    unsigned char state;
} Obj;

extern void func_167430(Obj *o, float dt);
extern int func_1668E8(Obj *o);
extern void func_167BF0(Obj *o);
extern void func_06F940(Obj *o);
extern int func_166AC0(Obj *o);
extern void func_1673D0(Obj *o);
extern int func_167280(Obj *o, float dt);
extern void func_1679A8(Obj *o);
extern void func_167DB0(Obj *o, float dt);

void func_1662D0(Obj *o, float dt)
{
    unsigned char st;

    st = o->state;
    if (st == 1) {
        func_167430(o, dt);
        func_1668E8(o);
        func_167BF0(o);
    } else if (st == 2) {
        func_1668E8(o);
        func_167BF0(o);
    } else if (st == 4) {
        ((void (*)(Obj *o, int a))func_06F940)(o, 1);
    } else if (st == 3) {
        if (func_166AC0(o) == 0) {
            func_1673D0(o);
        }
    } else if (st == 5) {
        if (func_1668E8(o) == 0) {
            if (func_167280(o, dt) != 0) {
                func_1679A8(o);
                o->state = 6;
            }
        }
        func_167BF0(o);
    } else if (st == 6) {
        func_167DB0(o, dt);
        func_167430(o, dt);
        func_167BF0(o);
        func_1668E8(o);
    }
}
