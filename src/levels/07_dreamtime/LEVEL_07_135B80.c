typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_0039D6C0;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_0039D6C0.a = 0;
            D_0039D6C0.d = 1.0f;
            D_0039D6C0.c = 0;
            D_0039D6C0.b = 0;
        }
    }
}
