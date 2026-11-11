typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_001D1938;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_001D1938.a = 0;
            D_001D1938.d = 1.0f;
            D_001D1938.c = 0;
            D_001D1938.b = 0;
        }
    }
}
