typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_00279968;
extern char D_00279978[];
extern char D_002799B0[];

void func_111F18(void *x);
void func_0B5948(void *x);
void func_0B5D40(void *x, int y);
void func_0B5920(void *x, int y);

void func_0B5DF0(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p != 0) {
        D_00279968.c = 0;
        D_00279968.d = 1.0f;
        D_00279968.a = 0;
        D_00279968.b = 0;
        func_111F18(D_00279978);
        func_0B5948(D_002799B0);

    } else {
        func_0B5D40(D_002799B0, 2);
        func_0B5920(D_00279978, 2);
    }
}
