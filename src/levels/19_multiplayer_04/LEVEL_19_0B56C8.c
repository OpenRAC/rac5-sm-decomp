typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_00279AE8;
extern char D_00279AF8[];
extern char D_00279B30[];

void func_1125B8(void *x);
void func_0B5220(void *x);
void func_0B5618(void *x, int y);
void func_0B51F8(void *x, int y);

void func_0B56C8(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p != 0) {
        D_00279AE8.c = 0;
        D_00279AE8.d = 1.0f;
        D_00279AE8.a = 0;
        D_00279AE8.b = 0;
        func_1125B8(D_00279AF8);
        func_0B5220(D_00279B30);

    } else {
        func_0B5618(D_00279B30, 2);
        func_0B51F8(D_00279AF8, 2);
    }
}
