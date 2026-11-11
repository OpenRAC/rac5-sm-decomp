typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_0003285C;
extern unsigned int D_00032868;

extern int func_01E548(unsigned int object);
extern void func_01E570(unsigned int object);
extern void func_022168(Rec *record);

void func_0224B8(void)
{
    Rec r = *D_0003285C;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_01E548(D_00032868);
    switch (state) {
    case 3:
        func_01E570(D_00032868);
        D_00032868 = 0xFFFFFFFFu;
        break;
    case 4:
        changed = 1;
        break;
    }
    if (changed) {
        r.flag = -1;
    } else {
        func_022168(&r);
    }
    *D_0003285C = r;
}
