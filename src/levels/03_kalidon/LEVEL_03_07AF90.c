typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_002554B0;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_002554B0.a = 0;
            D_002554B0.d = 1.0f;
            D_002554B0.c = 0;
            D_002554B0.b = 0;
        }
    }
}
