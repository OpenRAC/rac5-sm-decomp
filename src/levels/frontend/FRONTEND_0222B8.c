typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_0003285C;
extern unsigned int D_00032868;
extern int D_00032864;

extern int func_01E548(unsigned int object);
extern int func_01E4B8(unsigned int object, int a, int b);

void func_0222B8(void)
{
    Rec r = *D_0003285C;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_01E548(D_00032868);
    switch (state) {
    case 3:
        if (func_01E4B8(D_00032868, r.d, 0)) {
            D_00032864 = state;
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
    *D_0003285C = r;
}
