typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_0021B394;
extern unsigned int D_0021B3A0;

extern int func_11D460(unsigned int object);
extern void func_11D488(unsigned int object);
extern void func_1378A0(Rec *record);

void func_137BF0(void)
{
    Rec r = *D_0021B394;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_11D460(D_0021B3A0);
    switch (state) {
    case 3:
        func_11D488(D_0021B3A0);
        D_0021B3A0 = 0xFFFFFFFFu;
        break;
    case 4:
        changed = 1;
        break;
    }
    if (changed) {
        r.flag = -1;
    } else {
        func_1378A0(&r);
    }
    *D_0021B394 = r;
}
