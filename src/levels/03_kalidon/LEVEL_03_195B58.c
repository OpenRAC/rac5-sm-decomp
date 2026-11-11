/* LEVEL_03:0x195B58 -- starts the object's action on its first update and reports 3, otherwise 1. */
typedef struct Obj {
    char pad0[0x45];
    unsigned char b45;
} Obj;

extern void func_195C48(Obj *o);

int func_195B58(Obj *o)
{
    if (o->b45 == 0) {
        func_195C48(o);
        return 3;
    }
    return 1;
}
