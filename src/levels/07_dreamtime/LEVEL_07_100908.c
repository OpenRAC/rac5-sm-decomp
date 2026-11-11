typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00346F68;

void func_100908(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00346F68.a = 0;
        D_00346F68.d = 1.0f;
        D_00346F68.c = 0;
        D_00346F68.b = 0;
    }
}
