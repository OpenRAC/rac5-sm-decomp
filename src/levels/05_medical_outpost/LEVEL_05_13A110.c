/* LEVEL_05:0x13A110 -- placement copy of LEVEL_01_13E7A8.c: runs the handler for the object's state (0, 1 or 2). */
typedef struct {
    char pad00[0x45];
    unsigned char state;
} Obj;

extern void func_13A5C0(Obj *o);
extern void func_13A858(Obj *o);
extern void func_13B310(Obj *o);

void func_13A110(Obj *o)
{
    switch (o->state) {
    case 0:
        func_13A5C0(o);
        break;
    case 1:
        func_13A858(o);
        break;
    case 2:
        func_13B310(o);
        break;
    }
}
