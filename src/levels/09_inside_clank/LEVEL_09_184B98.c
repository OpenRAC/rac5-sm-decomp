typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_0037E840;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_0037E840.a = 0;
            D_0037E840.d = 1.0f;
            D_0037E840.c = 0;
            D_0037E840.b = 0;
        }
    }
}
