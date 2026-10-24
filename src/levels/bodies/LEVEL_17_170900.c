typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_002D6DA8;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_002D6DA8.a = 0;
            D_002D6DA8.d = 1.0f;
            D_002D6DA8.c = 0;
            D_002D6DA8.b = 0;
        }
    }
}
