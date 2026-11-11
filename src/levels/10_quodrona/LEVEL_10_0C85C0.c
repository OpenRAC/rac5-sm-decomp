typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_00334E28;
extern char D_00334E38[];
extern char D_00334E70[];

void func_1336C8(void *x);
void func_0C8118(void *x);
void func_0C8510(void *x, int y);
void func_0C80F0(void *x, int y);

void func_0C85C0(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p != 0) {
        D_00334E28.c = 0;
        D_00334E28.d = 1.0f;
        D_00334E28.a = 0;
        D_00334E28.b = 0;
        func_1336C8(D_00334E38);
        func_0C8118(D_00334E70);

    } else {
        func_0C8510(D_00334E70, 2);
        func_0C80F0(D_00334E38, 2);
    }
}
