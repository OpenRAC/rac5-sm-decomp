/* LEVEL_18:0x095EA0 -- placement copy of LEVEL_16_096E90.c: shifts the two position words by the difference
   between the requested value and the current one. */
typedef struct {
    int pad0;
    int a;
    int pad8;
    int b;
} Obj;

extern int func_095D50(Obj *obj);

void func_095EA0(Obj *obj, int value)
{
    int delta = value - func_095D50(obj);

    obj->a += delta;
    obj->b += delta;
}
