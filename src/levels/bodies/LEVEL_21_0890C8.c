/* LEVEL_21:0x0890C8 -- placement copy of LEVEL_16_096E90.c: shifts the two position words by the difference
   between the requested value and the current one. */
typedef struct {
    int pad0;
    int a;
    int pad8;
    int b;
} Obj;

extern int func_088F78(Obj *obj);

void func_0890C8(Obj *obj, int value)
{
    int delta = value - func_088F78(obj);

    obj->a += delta;
    obj->b += delta;
}
