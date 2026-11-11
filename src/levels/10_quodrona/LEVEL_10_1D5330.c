typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003A1FF0;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_003A1FF0.a = 0;
            D_003A1FF0.d = 1.0f;
            D_003A1FF0.c = 0;
            D_003A1FF0.b = 0;
        }
    }
}
