/* LEVEL_23:0x167BD0 -- placement copy of LEVEL_01_17BB98.c: state handler: when the animation helper reports done, advances state 1 to 2 or state 3 to 0 and queues the next spawn. */
typedef struct {
    char pad00[0x45];
    unsigned char state;
} Obj;

extern int func_073ED0(Obj *o, int a);
extern void func_074128(Obj *o, int a, int b, int c, float f, float g);

void func_167BD0(Obj *o)
{
    switch (o->state) {
    case 0:
        break;
    case 1:
        if (func_073ED0(o, 0) != 0) {
            o->state = 2;
            func_074128(o, 4, 0, 1, 0.15000000596046448f, 0.0f);
        }
        break;
    case 2:
        break;
    case 3:
        if (func_073ED0(o, 0) != 0) {
            o->state = 0;
            func_074128(o, 0, 0, 1, 0.15000000596046448f, 0.0f);
        }
        break;
    }
}
