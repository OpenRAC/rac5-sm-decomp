typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_001B6024;
extern unsigned int D_001B6030;

extern int func_0F9338(unsigned int object);
extern void func_0F9360(unsigned int object);
extern void func_1102C0(Rec *record);

void func_110610(void)
{
    Rec r = *D_001B6024;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_0F9338(D_001B6030);
    switch (state) {
    case 3:
        func_0F9360(D_001B6030);
        D_001B6030 = 0xFFFFFFFFu;
        break;
    case 4:
        changed = 1;
        break;
    }
    if (changed) {
        r.flag = -1;
    } else {
        func_1102C0(&r);
    }
    *D_001B6024 = r;
}
