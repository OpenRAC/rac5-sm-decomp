/* LEVEL_05:0x0A6DC0 -- placement copy of LEVEL_16_096E90.c: shifts the two position words by the difference
   between the requested value and the current one. */
typedef struct {
    int pad0;
    int a;
    int pad8;
    int b;
} Obj;

extern int func_0A6C70(Obj *obj);

void func_0A6DC0(Obj *obj, int value)
{
    int delta = value - func_0A6C70(obj);

    obj->a += delta;
    obj->b += delta;
}
