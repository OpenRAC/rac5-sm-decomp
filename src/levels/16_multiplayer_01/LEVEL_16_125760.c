typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_002E2AA8;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_002E2AA8.a = 0;
            D_002E2AA8.d = 1.0f;
            D_002E2AA8.c = 0;
            D_002E2AA8.b = 0;
        }
    }
}
