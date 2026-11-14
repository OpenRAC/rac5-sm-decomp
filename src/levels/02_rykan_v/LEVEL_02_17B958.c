/* LEVEL_02:0x17B958 -- state handler: scales the linked record's float, switches the object to state 4 with a timer byte, relocates the record's table pointer once, and enters state 2 when the probe returns 1; returns 1. */
typedef struct Rec { char pad00[0x10]; float f10; int w14; int w18; } Rec;
typedef struct Obj { char pad00[0x45]; unsigned char b45; unsigned char b46; char pad47[0x0D]; Rec *f54; char pad58[0x1E]; unsigned char b76; } Obj;
extern int D_0021BD54;
extern int func_027BF0(int a, int b);
int func_17B958(Obj *o)
{
    Rec *r = o->f54;
    r->f10 = r->f10 * 30.0f;
    o->b46 = 4;
    o->b76 = 0x18;
    r->w18 = 0;
    if (r->w14 != 0) { r->w14 = D_0021BD54 + r->w14; }
    if (func_027BF0(0x19, 0xFF) == 1) { o->b45 = 2; }
    return 1;
}
