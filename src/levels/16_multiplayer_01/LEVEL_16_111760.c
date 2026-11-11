typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_001B4BA4;
extern unsigned int D_001B4BB0;
extern int D_001B4BAC;

extern int func_0FAB00(unsigned int object);
extern int func_0FAA70(unsigned int object, int a, int b);

void func_111760(void)
{
    Rec r = *D_001B4BA4;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_0FAB00(D_001B4BB0);
    switch (state) {
    case 3:
        if (func_0FAA70(D_001B4BB0, r.d, 0)) {
            D_001B4BAC = state;
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
    *D_001B4BA4 = r;
}
