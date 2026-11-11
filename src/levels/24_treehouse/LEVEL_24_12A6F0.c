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

extern int func_110678(unsigned int object);
extern void func_1106A0(unsigned int object);
extern void func_12A3A0(Rec *record);

void func_12A6F0(void)
{
    Rec r = *D_001D7D14;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_110678(D_001D7D20);
    switch (state) {
    case 3:
        func_1106A0(D_001D7D20);
        D_001D7D20 = 0xFFFFFFFFu;
        break;
    case 4:
        changed = 1;
        break;
    }
    if (changed) {
        r.flag = -1;
    } else {
        func_12A3A0(&r);
    }
    *D_001D7D14 = r;
}
