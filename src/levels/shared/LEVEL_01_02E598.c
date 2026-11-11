typedef struct {
    float f00;
    char pad00[0x34];
    float f38;
    float f3C;
    char pad3C[0x8];
    float f48;
    float f4C;
    float f50;
} Obj;

void func_02E598(Obj *a0)
{
    a0->f48 = a0->f38 * a0->f38;
    a0->f4C = a0->f3C + a0->f3C;
    a0->f50 = 1.0f / -a0->f00;
}
