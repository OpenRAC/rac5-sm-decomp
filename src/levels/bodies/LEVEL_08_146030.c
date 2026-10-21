/* LEVEL_08:0x146030 -- take the record of the player, ask the manager for
   its state and, when the state asks for it, send the record back before
   storing it again. */
typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_24FF54;
extern void *D_24FF60;
extern int D_24FF5C;

extern int func_12ABB0(void *object);
extern void func_12AAA0(void *object, int a, int b);

void func_146030(void)
{
    Rec r = *D_24FF54;
    int state = func_12ABB0(D_24FF60);
    int changed = 0;

    switch (state) {
    case 3:
        func_12AAA0(D_24FF60, r.b, r.e);
        D_24FF5C = 4;
        break;
    case 4:
        changed = 1;
        break;
    }
    if (changed)
        r.flag = -1;
    *D_24FF54 = r;
}
