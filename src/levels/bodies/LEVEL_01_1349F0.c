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
extern int D_0020709C;

extern int func_11A410(unsigned int object);
extern int func_11A380(unsigned int object, int a, int b);

void func_1349F0(void)
{
    Rec r = *D_00207094;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_11A410(D_002070A0);
    switch (state) {
    case 3:
        if (func_11A380(D_002070A0, r.d, 0)) {
            D_0020709C = state;
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
    *D_00207094 = r;
}
