/* LEVEL_04:0x16F730 -- state handler: runs the helper for the object's mode byte (mode 0 first counts the activation in a global). */
typedef struct {
    char pad0[0x45];
    unsigned char mode;
} Obj;

extern int D_00220D9C;
extern int func_16FDD8(Obj *o, int a);
extern void func_16F990(Obj *o);
extern void func_16FA70(Obj *o);
extern void func_16FA78(Obj *o);

void func_16F730(Obj *o)
{
    switch (o->mode) {
    case 0:
        D_00220D9C++;
        func_16FDD8(o, 1);
        break;
    case 2:
        func_16FA70(o);
        break;
    case 1:
        func_16F990(o);
        break;
    case 3:
        func_16FA78(o);
        break;
    }
}
