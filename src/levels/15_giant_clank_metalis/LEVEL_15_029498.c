/* LEVEL_15:0x029498 -- tells whether the object's type word is one of two known values. */
typedef struct Obj {
    char pad0[4];
    unsigned int type;
} Obj;

int func_029498(Obj *o)
{
    switch (o->type) {
    case 0x10000001:
        return 1;
    case 0x10000004:
        return 0;
    default:
        return 0;
    }
}
