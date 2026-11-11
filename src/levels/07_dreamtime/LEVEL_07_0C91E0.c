typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_00341328;
extern char D_00341338[];
extern char D_00341370[];

void func_138848(void *x);
void func_0C8D38(void *x);
void func_0C9130(void *x, int y);
void func_0C8D10(void *x, int y);

void func_0C91E0(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p != 0) {
        D_00341328.c = 0;
        D_00341328.d = 1.0f;
        D_00341328.a = 0;
        D_00341328.b = 0;
        func_138848(D_00341338);
        func_0C8D38(D_00341370);

    } else {
        func_0C9130(D_00341370, 2);
        func_0C8D10(D_00341338, 2);
    }
}
