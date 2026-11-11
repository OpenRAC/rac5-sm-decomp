typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002F95F8;

void func_0E1BA8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002F95F8.a = 0;
        D_002F95F8.d = 1.0f;
        D_002F95F8.c = 0;
        D_002F95F8.b = 0;
    }
}
