/* LEVEL_09:0x137788 -- placement copy of LEVEL_01_13E7A8.c: runs the handler for the object's state (0, 1 or 2). */
typedef struct {
    char pad00[0x45];
    unsigned char state;
} Obj;

extern void func_137C38(Obj *o);
extern void func_137ED0(Obj *o);
extern void func_138988(Obj *o);

void func_137788(Obj *o)
{
    switch (o->state) {
    case 0:
        func_137C38(o);
        break;
    case 1:
        func_137ED0(o);
        break;
    case 2:
        func_138988(o);
        break;
    }
}
