typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_002204B4;
extern unsigned int D_002204C0;
extern int D_002204BC;

extern int func_125978(unsigned int object);
extern int func_1258E8(unsigned int object, int a, int b);

void func_140E70(void)
{
    Rec r = *D_002204B4;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_125978(D_002204C0);
    switch (state) {
    case 3:
        if (func_1258E8(D_002204C0, r.d, 0)) {
            D_002204BC = state;
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
    *D_002204B4 = r;
}
