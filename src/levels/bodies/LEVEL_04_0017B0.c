/* LEVEL_04:0x0017B0 -- a three-way mode on the first float: add the scaled
   rate, or hand the rate (optionally premultiplied) to the setter. */
typedef struct {
    float f0;
    float f4;
    char pad08[8];
    int mode;
} Obj;

void func_001748(Obj *o, float c, float d);

void func_0017B0(Obj *o, float a, float b, float c)
{
    switch (o->mode) {
    case 0:
        func_001748(o, c, o->f4);
        break;
    case 1:
        o->f0 = o->f0 + c * o->f4;
        break;
    case 2:
        func_001748(o, c, (a * b) * o->f4);
        break;
    }
}
