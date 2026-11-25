/* LEVEL_09:0x0B7128 -- placement copy of LEVEL_01_0B9E78.c: placement copy of LEVEL_01_0B9E78.c: stores the two values into the object's fields at +0x70 and +0x6C and returns 1. */
typedef struct Obj {
    char pad_00[0x6C];
    int w6C;
    int w70;
} Obj;

int func_0B7128(Obj *o, int a, int b)
{
    o->w70 = a;
    o->w6C = b;
    return 1;
}
