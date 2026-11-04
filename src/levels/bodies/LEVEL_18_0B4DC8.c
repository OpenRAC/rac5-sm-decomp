typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_00279CE8;
extern char D_00279CF8[];
extern char D_00279D30[];

void func_110BC8(void *x);
void func_0B4920(void *x);
void func_0B4D18(void *x, int y);
void func_0B48F8(void *x, int y);

void func_0B4DC8(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p != 0) {
        D_00279CE8.c = 0;
        D_00279CE8.d = 1.0f;
        D_00279CE8.a = 0;
        D_00279CE8.b = 0;
        func_110BC8(D_00279CF8);
        func_0B4920(D_00279D30);

    } else {
        func_0B4D18(D_00279D30, 2);
        func_0B48F8(D_00279CF8, 2);
    }
}
