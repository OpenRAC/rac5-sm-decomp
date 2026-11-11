/* LEVEL_02:0x1AEB48 -- dispatches an object to its per-state handler by the state byte (0, 4, 5, 1, 2, 3). */
struct Obj {
    char pad00[0x45];
    unsigned char b45;
};

extern void func_1AEBE8(struct Obj *o);
extern void func_1AECA0(struct Obj *o);
extern void func_1AED20(struct Obj *o);
extern void func_1AED40(struct Obj *o);
extern void func_1AF000(struct Obj *o);
extern void func_1AF0B8(struct Obj *o);

void func_1AEB48(struct Obj *o)
{
    if (o->b45 == 0) {
        func_1AEBE8(o);
    } else if (o->b45 == 4) {
        func_1AECA0(o);
    } else if (o->b45 == 5) {
        func_1AED20(o);
    } else if (o->b45 == 1) {
        func_1AED40(o);
    } else if (o->b45 == 2) {
        func_1AF000(o);
    } else if (o->b45 == 3) {
        func_1AF0B8(o);
    }
}
