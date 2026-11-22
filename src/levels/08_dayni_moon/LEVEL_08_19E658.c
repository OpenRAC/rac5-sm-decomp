/* LEVEL_08:0x19E658 -- placement copy of LEVEL_01_17BB98.c: state handler: when the animation helper reports done, advances state 1 to 2 or state 3 to 0 and queues the next spawn. */
typedef struct {
    char pad00[0x45];
    unsigned char state;
} Obj;

extern int func_084A40(Obj *o, int a);
extern void func_084C98(Obj *o, int a, int b, int c, float f, float g);

void func_19E658(Obj *o)
{
    switch (o->state) {
    case 0:
        break;
    case 1:
        if (func_084A40(o, 0) != 0) {
            o->state = 2;
            func_084C98(o, 4, 0, 1, 0.15000000596046448f, 0.0f);
        }
        break;
    case 2:
        break;
    case 3:
        if (func_084A40(o, 0) != 0) {
            o->state = 0;
            func_084C98(o, 0, 0, 1, 0.15000000596046448f, 0.0f);
        }
        break;
    }
}
