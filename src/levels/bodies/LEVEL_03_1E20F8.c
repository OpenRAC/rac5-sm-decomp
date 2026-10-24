typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003B3C78;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_003B3C78.a = 0;
            D_003B3C78.d = 1.0f;
            D_003B3C78.c = 0;
            D_003B3C78.b = 0;
        }
    }
}
