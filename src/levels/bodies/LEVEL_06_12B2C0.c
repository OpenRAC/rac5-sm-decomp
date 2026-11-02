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

extern int func_1109E0(unsigned int object);
extern void func_110A08(unsigned int object);
extern void func_12AF70(Rec *record);

void func_12B2C0(void)
{
    Rec r = *D_001F5C94;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_1109E0(D_001F5CA0);
    switch (state) {
    case 3:
        func_110A08(D_001F5CA0);
        D_001F5CA0 = 0xFFFFFFFFu;
        break;
    case 4:
        changed = 1;
        break;
    }
    if (changed) {
        r.flag = -1;
    } else {
        func_12AF70(&r);
    }
    *D_001F5C94 = r;
}
