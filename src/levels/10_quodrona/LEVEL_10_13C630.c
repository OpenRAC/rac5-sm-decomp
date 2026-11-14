/* LEVEL_10:0x13C630 -- placement copy of LEVEL_01_13E7A8.c: runs the handler for the object's state (0, 1 or 2). */
typedef struct {
    char pad00[0x45];
    unsigned char state;
} Obj;

extern void func_13CAE0(Obj *o);
extern void func_13CD78(Obj *o);
extern void func_13D830(Obj *o);

void func_13C630(Obj *o)
{
    switch (o->state) {
    case 0:
        func_13CAE0(o);
        break;
    case 1:
        func_13CD78(o);
        break;
    case 2:
        func_13D830(o);
        break;
    }
}
