typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003484F8;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_003484F8.a = 0;
            D_003484F8.d = 1.0f;
            D_003484F8.c = 0;
            D_003484F8.b = 0;
        }
    }
}
