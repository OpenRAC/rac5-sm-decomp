typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_00318F30;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_00318F30.a = 0;
            D_00318F30.d = 1.0f;
            D_00318F30.c = 0;
            D_00318F30.b = 0;
        }
    }
}
