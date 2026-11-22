/* LEVEL_04:0x187990 -- placement copy of LEVEL_01_17BB98.c: state handler: when the animation helper reports done, advances state 1 to 2 or state 3 to 0 and queues the next spawn. */
typedef struct {
    char pad00[0x45];
    unsigned char state;
} Obj;

extern int func_07FF30(Obj *o, int a);
extern void func_080188(Obj *o, int a, int b, int c, float f, float g);

void func_187990(Obj *o)
{
    switch (o->state) {
    case 0:
        break;
    case 1:
        if (func_07FF30(o, 0) != 0) {
            o->state = 2;
            func_080188(o, 4, 0, 1, 0.15000000596046448f, 0.0f);
        }
        break;
    case 2:
        break;
    case 3:
        if (func_07FF30(o, 0) != 0) {
            o->state = 0;
            func_080188(o, 0, 0, 1, 0.15000000596046448f, 0.0f);
        }
        break;
    }
}
