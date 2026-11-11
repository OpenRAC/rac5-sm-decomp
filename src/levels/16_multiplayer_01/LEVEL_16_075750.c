typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_001F0F40;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_001F0F40.a = 0;
            D_001F0F40.d = 1.0f;
            D_001F0F40.c = 0;
            D_001F0F40.b = 0;
        }
    }
}
