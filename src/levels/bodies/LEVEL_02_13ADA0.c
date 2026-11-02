typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_0021C054;
extern unsigned int D_0021C060;
extern int D_0021C05C;

extern int func_120758(unsigned int object);
extern int func_1206C8(unsigned int object, int a, int b);

void func_13ADA0(void)
{
    Rec r = *D_0021C054;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_120758(D_0021C060);
    switch (state) {
    case 3:
        if (func_1206C8(D_0021C060, r.d, 0)) {
            D_0021C05C = state;
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
    *D_0021C054 = r;
}
