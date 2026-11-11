typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_001D7D14;
extern unsigned int D_001D7D20;
extern int D_001D7D1C;

extern int func_110678(unsigned int object);
extern int func_1105E8(unsigned int object, int a, int b);

void func_12A4F0(void)
{
    Rec r = *D_001D7D14;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_110678(D_001D7D20);
    switch (state) {
    case 3:
        if (func_1105E8(D_001D7D20, r.d, 0)) {
            D_001D7D1C = state;
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
    *D_001D7D14 = r;
}
