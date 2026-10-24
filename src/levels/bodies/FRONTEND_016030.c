typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00196FD0;

void func_016030(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00196FD0.a = 0;
        D_00196FD0.d = 1.0f;
        D_00196FD0.c = 0;
        D_00196FD0.b = 0;
    }
}
