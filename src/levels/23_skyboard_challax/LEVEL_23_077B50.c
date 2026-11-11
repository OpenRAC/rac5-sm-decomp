typedef struct {
    char pad[0x30];
    float x;
    float y;
    float z;
} Src;

extern void func_116EB0(int a, float b, float c, float d);

void f(Src *a0, int a1)
{
    func_116EB0(a1, a0->x, a0->y, a0->z);
}
