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

extern int func_10B978(unsigned int object);
extern void func_10B9A0(unsigned int object);
extern void func_126018(Rec *record);

void func_126368(void)
{
    Rec r = *D_001DA494;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_10B978(D_001DA4A0);
    switch (state) {
    case 3:
        func_10B9A0(D_001DA4A0);
        D_001DA4A0 = 0xFFFFFFFFu;
        break;
    case 4:
        changed = 1;
        break;
    }
    if (changed) {
        r.flag = -1;
    } else {
        func_126018(&r);
    }
    *D_001DA494 = r;
}
