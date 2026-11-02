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

extern int func_0F48D0(unsigned int object);
extern void func_0F48F8(unsigned int object);
extern void func_10BD70(Rec *record);

void func_10C0C0(void)
{
    Rec r = *D_00166074;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_0F48D0(D_00166080);
    switch (state) {
    case 3:
        func_0F48F8(D_00166080);
        D_00166080 = 0xFFFFFFFFu;
        break;
    case 4:
        changed = 1;
        break;
    }
    if (changed) {
        r.flag = -1;
    } else {
        func_10BD70(&r);
    }
    *D_00166074 = r;
}
