typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_0021F714;
extern unsigned int D_0021F720;
extern int D_0021F71C;

extern int func_118580(unsigned int object);
extern int func_1184F0(unsigned int object, int a, int b);

void func_132DB8(void)
{
    Rec r = *D_0021F714;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_118580(D_0021F720);
    switch (state) {
    case 3:
        if (func_1184F0(D_0021F720, r.d, 0)) {
            D_0021F71C = state;
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
    *D_0021F714 = r;
}
