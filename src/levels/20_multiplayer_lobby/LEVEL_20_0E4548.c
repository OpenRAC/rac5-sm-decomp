typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_00117264;
extern unsigned int D_00117270;
extern int D_0011726C;

extern int func_0D3960(unsigned int object);
extern int func_0D38D0(unsigned int object, int a, int b);

void func_0E4548(void)
{
    Rec r = *D_00117264;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_0D3960(D_00117270);
    switch (state) {
    case 3:
        if (func_0D38D0(D_00117270, r.d, 0)) {
            D_0011726C = state;
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
    *D_00117264 = r;
}
