typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_24A3D8;
extern float D_24A3E8;

void func_012A40(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_24A3D8.d = 1.0f;
            D_24A3D8.a = 0;
            D_24A3E8 = 1.0f / 30.0f;
            D_24A3D8.c = 0;
            D_24A3D8.b = 0;
        }
    }
}
