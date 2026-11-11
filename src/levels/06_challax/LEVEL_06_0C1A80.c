typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003187A8;
extern char D_003187B8[];
extern char D_003187F0[];

void func_12BF18(void *x);
void func_0C15D8(void *x);
void func_0C19D0(void *x, int y);
void func_0C15B0(void *x, int y);

void func_0C1A80(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p != 0) {
        D_003187A8.c = 0;
        D_003187A8.d = 1.0f;
        D_003187A8.a = 0;
        D_003187A8.b = 0;
        func_12BF18(D_003187B8);
        func_0C15D8(D_003187F0);

    } else {
        func_0C19D0(D_003187F0, 2);
        func_0C15B0(D_003187B8, 2);
    }
}
