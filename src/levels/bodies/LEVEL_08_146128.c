typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_0024FF54;
extern unsigned int D_0024FF60;

extern int func_12ABB0(unsigned int object);
extern void func_12ABD8(unsigned int object);
extern void func_145DD8(Rec *record);

void func_146128(void)
{
    Rec r = *D_0024FF54;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_12ABB0(D_0024FF60);
    switch (state) {
    case 3:
        func_12ABD8(D_0024FF60);
        D_0024FF60 = 0xFFFFFFFFu;
        break;
    case 4:
        changed = 1;
        break;
    }
    if (changed) {
        r.flag = -1;
    } else {
        func_145DD8(&r);
    }
    *D_0024FF54 = r;
}
