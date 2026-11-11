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
extern int D_0015B9FC;

extern int func_0DE770(unsigned int object);
extern int func_0DE6E0(unsigned int object, int a, int b);

void func_0F38B8(void)
{
    Rec r = *D_0015B9F4;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_0DE770(D_0015BA00);
    switch (state) {
    case 3:
        if (func_0DE6E0(D_0015BA00, r.d, 0)) {
            D_0015B9FC = state;
        } else {
            changed = 1;
        }
        break;
    case 4:
        changed = 1;
        break;
    }
    if (changed)
        r.flag = -1;
    *D_0015B9F4 = r;
}
