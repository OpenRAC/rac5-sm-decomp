typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_001CFBD8;

void func_019770(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_001CFBD8.a = 0;
        D_001CFBD8.d = 1.0f;
        D_001CFBD8.c = 0;
        D_001CFBD8.b = 0;
    }
}
