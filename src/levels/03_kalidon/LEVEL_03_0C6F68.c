typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003468A8;
extern char D_003468B8[];
extern char D_003468F0[];

void func_133C10(void *x);
void func_0C6AC0(void *x);
void func_0C6EB8(void *x, int y);
void func_0C6A98(void *x, int y);

void func_0C6F68(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p != 0) {
        D_003468A8.c = 0;
        D_003468A8.d = 1.0f;
        D_003468A8.a = 0;
        D_003468A8.b = 0;
        func_133C10(D_003468B8);
        func_0C6AC0(D_003468F0);

    } else {
        func_0C6EB8(D_003468F0, 2);
        func_0C6A98(D_003468B8, 2);
    }
}
