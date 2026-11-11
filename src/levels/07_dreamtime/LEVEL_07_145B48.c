typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003A71F8;

void func_145B48(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003A71F8.a = 0;
        D_003A71F8.d = 1.0f;
        D_003A71F8.c = 0;
        D_003A71F8.b = 0;
    }
}
