typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_0020FCF4;
extern unsigned int D_0020FD00;

extern int func_118628(unsigned int object);
extern void func_118650(unsigned int object);
extern void func_132720(Rec *record);

void func_132A70(void)
{
    Rec r = *D_0020FCF4;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_118628(D_0020FD00);
    switch (state) {
    case 3:
        func_118650(D_0020FD00);
        D_0020FD00 = 0xFFFFFFFFu;
        break;
    case 4:
        changed = 1;
        break;
    }
    if (changed) {
        r.flag = -1;
    } else {
        func_132720(&r);
    }
    *D_0020FCF4 = r;
}
