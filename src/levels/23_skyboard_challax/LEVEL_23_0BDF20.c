typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_002FCE68;
extern char D_002FCE78[];
extern char D_002FCEB0[];

void func_126FC0(void *x);
void func_0BDA78(void *x);
void func_0BDE70(void *x, int y);
void func_0BDA50(void *x, int y);

void func_0BDF20(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p != 0) {
        D_002FCE68.c = 0;
        D_002FCE68.d = 1.0f;
        D_002FCE68.a = 0;
        D_002FCE68.b = 0;
        func_126FC0(D_002FCE78);
        func_0BDA78(D_002FCEB0);

    } else {
        func_0BDE70(D_002FCEB0, 2);
        func_0BDA50(D_002FCE78, 2);
    }
}
