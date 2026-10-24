typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003AD588;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_003AD588.a = 0;
            D_003AD588.d = 1.0f;
            D_003AD588.c = 0;
            D_003AD588.b = 0;
        }
    }
}
