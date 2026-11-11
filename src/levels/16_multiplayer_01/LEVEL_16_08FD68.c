typedef struct {
    float a;
    float b;
} P;

extern P D_001A46E0;
extern char D_001A46F0;

void func_08FD68(float x, float y)
{
    D_001A46F0 = 1;
    D_001A46E0.a = x;
    D_001A46E0.b = y;
}
