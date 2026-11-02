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
extern int D_0021B39C;

extern int func_11D460(unsigned int object);
extern int func_11D3D0(unsigned int object, int a, int b);

void func_1379F0(void)
{
    Rec r = *D_0021B394;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_11D460(D_0021B3A0);
    switch (state) {
    case 3:
        if (func_11D3D0(D_0021B3A0, r.d, 0)) {
            D_0021B39C = state;
        } else {
            changed = 1;
        }
        break;
    case 4:
        changed = 1;
        break;
    }
    if (changed)
        r.flag = -1;
    *D_0021B394 = r;
}
