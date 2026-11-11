typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_00166074;
extern unsigned int D_00166080;
extern int D_0016607C;

extern int func_0F48D0(unsigned int object);
extern int func_0F4840(unsigned int object, int a, int b);

void func_10BEC0(void)
{
    Rec r = *D_00166074;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_0F48D0(D_00166080);
    switch (state) {
    case 3:
        if (func_0F4840(D_00166080, r.d, 0)) {
            D_0016607C = state;
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
    *D_00166074 = r;
}
