/* LEVEL_10:0x1C7D00 -- starts the mode 2 step unless the object is already in state 2; returns 0. */
struct Obj {
    char pad00[0x45];
    unsigned char b45;
};

extern void func_1C7EC0(struct Obj *o, int mode);

int func_1C7D00(struct Obj *o)
{
    if (o->b45 != 2) {
        func_1C7EC0(o, 2);
    }
    return 0;
}
