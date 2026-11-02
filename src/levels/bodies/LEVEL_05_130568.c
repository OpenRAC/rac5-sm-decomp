typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_001F6114;
extern unsigned int D_001F6120;

extern int func_116430(unsigned int object);
extern void func_116458(unsigned int object);
extern void func_130218(Rec *record);

void func_130568(void)
{
    Rec r = *D_001F6114;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_116430(D_001F6120);
    switch (state) {
    case 3:
        func_116458(D_001F6120);
        D_001F6120 = 0xFFFFFFFFu;
        break;
    case 4:
        changed = 1;
        break;
    }
    if (changed) {
        r.flag = -1;
    } else {
        func_130218(&r);
    }
    *D_001F6114 = r;
}
