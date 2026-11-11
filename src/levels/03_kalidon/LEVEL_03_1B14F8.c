typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003B2218;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_003B2218.a = 0;
            D_003B2218.d = 1.0f;
            D_003B2218.c = 0;
            D_003B2218.b = 0;
        }
    }
}
