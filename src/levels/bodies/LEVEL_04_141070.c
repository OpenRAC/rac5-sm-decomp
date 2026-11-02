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

extern int func_125978(unsigned int object);
extern void func_1259A0(unsigned int object);
extern void func_140D20(Rec *record);

void func_141070(void)
{
    Rec r = *D_002204B4;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_125978(D_002204C0);
    switch (state) {
    case 3:
        func_1259A0(D_002204C0);
        D_002204C0 = 0xFFFFFFFFu;
        break;
    case 4:
        changed = 1;
        break;
    }
    if (changed) {
        r.flag = -1;
    } else {
        func_140D20(&r);
    }
    *D_002204B4 = r;
}
