typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_0031D670;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_0031D670.a = 0;
            D_0031D670.d = 1.0f;
            D_0031D670.c = 0;
            D_0031D670.b = 0;
        }
    }
}
