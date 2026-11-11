typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_0018AE80;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_0018AE80.a = 0;
            D_0018AE80.d = 1.0f;
            D_0018AE80.c = 0;
            D_0018AE80.b = 0;
        }
    }
}
