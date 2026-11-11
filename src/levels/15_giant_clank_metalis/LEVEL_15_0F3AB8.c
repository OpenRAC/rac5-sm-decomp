typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_0015B9F4;
extern unsigned int D_0015BA00;

extern int func_0DE770(unsigned int object);
extern void func_0DE798(unsigned int object);
extern void func_0F3768(Rec *record);

void func_0F3AB8(void)
{
    Rec r = *D_0015B9F4;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_0DE770(D_0015BA00);
    switch (state) {
    case 3:
        func_0DE798(D_0015BA00);
        D_0015BA00 = 0xFFFFFFFFu;
        break;
    case 4:
        changed = 1;
        break;
    }
    if (changed) {
        r.flag = -1;
    } else {
        func_0F3768(&r);
    }
    *D_0015B9F4 = r;
}
