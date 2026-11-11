/* LEVEL_02:0x17B468 -- dispatches on the object's state byte to one of two handlers. */
typedef struct {
    char pad[0x45];
    unsigned char state;
} Obj;

extern void func_17B4B0(Obj *o);
extern void func_17B500(Obj *o);

void func_17B468(Obj *o)
{
    if (o->state == 2)
        func_17B4B0(o);
    else if (o->state == 3)
        func_17B500(o);
}
