typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_001F6114;
extern unsigned int D_001F6120;
extern int D_001F611C;

extern int func_116430(unsigned int object);
extern int func_1163A0(unsigned int object, int a, int b);

void func_130368(void)
{
    Rec r = *D_001F6114;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_116430(D_001F6120);
    switch (state) {
    case 3:
        if (func_1163A0(D_001F6120, r.d, 0)) {
            D_001F611C = state;
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
    *D_001F6114 = r;
}
