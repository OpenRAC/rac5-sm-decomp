typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_0026AC68;
extern char D_0026AC78[];
extern char D_0026ACB0[];

void func_111490(void *x);
void func_0B4E88(void *x);
void func_0B5280(void *x, int y);
void func_0B4E60(void *x, int y);

void func_0B5330(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p != 0) {
        D_0026AC68.c = 0;
        D_0026AC68.d = 1.0f;
        D_0026AC68.a = 0;
        D_0026AC68.b = 0;
        func_111490(D_0026AC78);
        func_0B4E88(D_0026ACB0);

    } else {
        func_0B5280(D_0026ACB0, 2);
        func_0B4E60(D_0026AC78, 2);
    }
}
