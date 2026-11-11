typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_343600;
extern float D_343610;
extern float D_217C54;

void func_0D4B88(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_343600.d = 1.0f;
            D_343600.a = 0;
            D_343610 = D_217C54;
            D_343600.c = 0;
            D_343600.b = 0;
        }
    }
}
