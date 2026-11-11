typedef struct {
    char pad[0x154];
    float f154;
} S;

extern S *D_0019C15C;

void func_0037C8(float f12)
{
    D_0019C15C->f154 = f12;
}
