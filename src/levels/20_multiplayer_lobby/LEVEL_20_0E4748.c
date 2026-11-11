typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_00117264;
extern unsigned int D_00117270;

extern int func_0D3960(unsigned int object);
extern void func_0D3988(unsigned int object);
extern void func_0E43F8(Rec *record);

void func_0E4748(void)
{
    Rec r = *D_00117264;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_0D3960(D_00117270);
    switch (state) {
    case 3:
        func_0D3988(D_00117270);
        D_00117270 = 0xFFFFFFFFu;
        break;
    case 4:
        changed = 1;
        break;
    }
    if (changed) {
        r.flag = -1;
    } else {
        func_0E43F8(&r);
    }
    *D_00117264 = r;
}
