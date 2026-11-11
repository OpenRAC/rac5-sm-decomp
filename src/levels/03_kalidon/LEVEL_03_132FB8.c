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

extern int func_118580(unsigned int object);
extern void func_1185A8(unsigned int object);
extern void func_132C68(Rec *record);

void func_132FB8(void)
{
    Rec r = *D_0021F714;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_118580(D_0021F720);
    switch (state) {
    case 3:
        func_1185A8(D_0021F720);
        D_0021F720 = 0xFFFFFFFFu;
        break;
    case 4:
        changed = 1;
        break;
    }
    if (changed) {
        r.flag = -1;
    } else {
        func_132C68(&r);
    }
    *D_0021F714 = r;
}
