/* FRONTEND:0x0223C0 -- take the record of the player, ask the manager for
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

extern Rec *D_0003285C;
extern void *D_00032868;
extern int D_00032864;

extern int func_01E548(void *object);
extern void func_01E438(void *object, int a, int b);

void func_0223C0(void)
{
    Rec r = *D_0003285C;
    int state = func_01E548(D_00032868);
    int changed = 0;

    switch (state) {
    case 3:
        func_01E438(D_00032868, r.b, r.e);
        D_00032864 = 4;
        break;
    case 4:
        changed = 1;
        break;
    }
    if (changed)
        r.flag = -1;
    *D_0003285C = r;
}
