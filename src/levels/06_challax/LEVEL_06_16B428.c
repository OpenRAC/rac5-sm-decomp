typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_00382BD8;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_00382BD8.a = 0;
            D_00382BD8.d = 1.0f;
            D_00382BD8.c = 0;
            D_00382BD8.b = 0;
        }
    }
}
