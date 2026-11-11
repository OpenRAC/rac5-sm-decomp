typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_001F5C94;
extern unsigned int D_001F5CA0;
extern int D_001F5C9C;

extern int func_1109E0(unsigned int object);
extern int func_110950(unsigned int object, int a, int b);

void func_12B0C0(void)
{
    Rec r = *D_001F5C94;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_1109E0(D_001F5CA0);
    switch (state) {
    case 3:
        if (func_110950(D_001F5CA0, r.d, 0)) {
            D_001F5C9C = state;
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
    *D_001F5C94 = r;
}
