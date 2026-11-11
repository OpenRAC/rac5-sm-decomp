typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_001F0B94;
extern unsigned int D_001F0BA0;

extern int func_113800(unsigned int object);
extern void func_113828(unsigned int object);
extern void func_12D838(Rec *record);

void func_12DB88(void)
{
    Rec r = *D_001F0B94;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_113800(D_001F0BA0);
    switch (state) {
    case 3:
        func_113828(D_001F0BA0);
        D_001F0BA0 = 0xFFFFFFFFu;
        break;
    case 4:
        changed = 1;
        break;
    }
    if (changed) {
        r.flag = -1;
    } else {
        func_12D838(&r);
    }
    *D_001F0B94 = r;
}
