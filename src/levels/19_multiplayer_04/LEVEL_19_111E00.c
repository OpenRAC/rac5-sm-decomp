typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_001B5D24;
extern unsigned int D_001B5D30;
extern int D_001B5D2C;

extern int func_0FAD28(unsigned int object);
extern int func_0FAC98(unsigned int object, int a, int b);

void func_111E00(void)
{
    Rec r = *D_001B5D24;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_0FAD28(D_001B5D30);
    switch (state) {
    case 3:
        if (func_0FAC98(D_001B5D30, r.d, 0)) {
            D_001B5D2C = state;
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
    *D_001B5D24 = r;
}
