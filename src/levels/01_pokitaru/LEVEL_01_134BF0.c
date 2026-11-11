typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_00207094;
extern unsigned int D_002070A0;

extern int func_11A410(unsigned int object);
extern void func_11A438(unsigned int object);
extern void func_1348A0(Rec *record);

void func_134BF0(void)
{
    Rec r = *D_00207094;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_11A410(D_002070A0);
    switch (state) {
    case 3:
        func_11A438(D_002070A0);
        D_002070A0 = 0xFFFFFFFFu;
        break;
    case 4:
        changed = 1;
        break;
    }
    if (changed) {
        r.flag = -1;
    } else {
        func_1348A0(&r);
    }
    *D_00207094 = r;
}
