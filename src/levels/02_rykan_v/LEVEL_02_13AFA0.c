typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_0021C054;
extern unsigned int D_0021C060;

extern int func_120758(unsigned int object);
extern void func_120780(unsigned int object);
extern void func_13AC50(Rec *record);

void func_13AFA0(void)
{
    Rec r = *D_0021C054;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_120758(D_0021C060);
    switch (state) {
    case 3:
        func_120780(D_0021C060);
        D_0021C060 = 0xFFFFFFFFu;
        break;
    case 4:
        changed = 1;
        break;
    }
    if (changed) {
        r.flag = -1;
    } else {
        func_13AC50(&r);
    }
    *D_0021C054 = r;
}
