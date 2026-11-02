typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_0020FCF4;
extern unsigned int D_0020FD00;
extern int D_0020FCFC;

extern int func_118628(unsigned int object);
extern int func_118598(unsigned int object, int a, int b);

void func_132870(void)
{
    Rec r = *D_0020FCF4;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_118628(D_0020FD00);
    switch (state) {
    case 3:
        if (func_118598(D_0020FD00, r.d, 0)) {
            D_0020FCFC = state;
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
    *D_0020FCF4 = r;
}
