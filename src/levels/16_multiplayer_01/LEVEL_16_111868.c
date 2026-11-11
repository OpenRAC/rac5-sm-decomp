/* LEVEL_16:0x111868 -- take the record of the player, ask the manager for
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

extern Rec *D_1B4BA4;
extern void *D_1B4BB0;
extern int D_1B4BAC;

extern int func_0FAB00(void *object);
extern void func_0FA9F0(void *object, int a, int b);

void func_111868(void)
{
    Rec r = *D_1B4BA4;
    int state = func_0FAB00(D_1B4BB0);
    int changed = 0;

    switch (state) {
    case 3:
        func_0FA9F0(D_1B4BB0, r.b, r.e);
        D_1B4BAC = 4;
        break;
    case 4:
        changed = 1;
        break;
    }
    if (changed)
        r.flag = -1;
    *D_1B4BA4 = r;
}
