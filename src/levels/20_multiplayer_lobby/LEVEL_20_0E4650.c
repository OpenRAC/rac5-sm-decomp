/* LEVEL_20:0x0E4650 -- take the record of the player, ask the manager for
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

extern Rec *D_117264;
extern void *D_117270;
extern int D_11726C;

extern int func_0D3960(void *object);
extern void func_0D3850(void *object, int a, int b);

void func_0E4650(void)
{
    Rec r = *D_117264;
    int state = func_0D3960(D_117270);
    int changed = 0;

    switch (state) {
    case 3:
        func_0D3850(D_117270, r.b, r.e);
        D_11726C = 4;
        break;
    case 4:
        changed = 1;
        break;
    }
    if (changed)
        r.flag = -1;
    *D_117264 = r;
}
