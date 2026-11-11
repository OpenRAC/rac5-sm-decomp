typedef struct {
    int flag;
    int a;
    int b;
    int c;
    int d;
    int e;
} Rec;

extern Rec *D_001A81A4;
extern unsigned int D_001A81B0;

extern int func_0FA110(unsigned int object);
extern void func_0FA138(unsigned int object);
extern void func_110B88(Rec *record);

void func_110ED8(void)
{
    Rec r = *D_001A81A4;
    int state;
    int changed = 0;

    r.flag = 0;
    state = func_0FA110(D_001A81B0);
    switch (state) {
    case 3:
        func_0FA138(D_001A81B0);
        D_001A81B0 = 0xFFFFFFFFu;
        break;
    case 4:
        changed = 1;
        break;
    }
    if (changed) {
        r.flag = -1;
    } else {
        func_110B88(&r);
    }
    *D_001A81A4 = r;
}
