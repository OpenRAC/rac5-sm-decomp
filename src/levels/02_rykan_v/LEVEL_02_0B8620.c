typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0033EE58;

void func_0B8620(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0033EE58.a = 0;
        D_0033EE58.d = 1.0f;
        D_0033EE58.c = 0;
        D_0033EE58.b = 0;
    }
}
