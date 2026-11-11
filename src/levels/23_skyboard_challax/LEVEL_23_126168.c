typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_001DA494;
extern unsigned int D_001DA4A0;
extern int D_001DA49C;

extern int func_10B978(unsigned int object);
extern int func_10B8E8(unsigned int object, int a, int b);

void func_126168(void)
{
    Rec r = *D_001DA494;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_10B978(D_001DA4A0);
    switch (state) {
    case 3:
        if (func_10B8E8(D_001DA4A0, r.d, 0)) {
            D_001DA49C = state;
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
    *D_001DA494 = r;
}
