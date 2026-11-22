/* LEVEL_08:0x17AAD8 -- placement copy of LEVEL_04_16F730.c: state handler: runs the helper for the object's mode byte (mode 0 first counts the activation in a global). */
typedef struct {
    char pad0[0x45];
    unsigned char mode;
} Obj;

extern int D_00250884;
extern int func_17B180(Obj *o, int a);
extern void func_17AD38(Obj *o);
extern void func_17AE18(Obj *o);
extern void func_17AE20(Obj *o);

void func_17AAD8(Obj *o)
{
    switch (o->mode) {
    case 0:
        D_00250884++;
        func_17B180(o, 1);
        break;
    case 2:
        func_17AE18(o);
        break;
    case 1:
        func_17AD38(o);
        break;
    case 3:
        func_17AE20(o);
        break;
    }
}
