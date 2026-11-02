typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_001B5D24;
extern unsigned int D_001B5D30;

extern int func_0FAD28(unsigned int object);
extern void func_0FAD50(unsigned int object);
extern void func_111CB0(Rec *record);

void func_112000(void)
{
    Rec r = *D_001B5D24;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_0FAD28(D_001B5D30);
    switch (state) {
    case 3:
        func_0FAD50(D_001B5D30);
        D_001B5D30 = 0xFFFFFFFFu;
        break;
    case 4:
        changed = 1;
        break;
    }
    if (changed) {
        r.flag = -1;
    } else {
        func_111CB0(&r);
    }
    *D_001B5D24 = r;
}
