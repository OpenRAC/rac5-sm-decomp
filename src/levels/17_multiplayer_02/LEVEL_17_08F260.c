typedef struct {
    float a;
    float b;
} P;

extern P D_00197CE0;
extern char D_00197CF0;

void func_08F260(float x, float y)
{
    D_00197CF0 = 1;
    D_00197CE0.a = x;
    D_00197CE0.b = y;
}
