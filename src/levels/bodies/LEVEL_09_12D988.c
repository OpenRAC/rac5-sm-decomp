typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_001F0B94;
extern unsigned int D_001F0BA0;
extern int D_001F0B9C;

extern int func_113800(unsigned int object);
extern int func_113770(unsigned int object, int a, int b);

void func_12D988(void)
{
    Rec r = *D_001F0B94;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_113800(D_001F0BA0);
    switch (state) {
    case 3:
        if (func_113770(D_001F0BA0, r.d, 0)) {
            D_001F0B9C = state;
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
    *D_001F0B94 = r;
}
