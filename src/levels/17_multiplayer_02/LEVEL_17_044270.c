typedef struct {
    char pad[0x23C];
    float f23C;
} S;

void func_044210(void *a0, void *a1, float f12);

void func_044270(S *a0)
{
    func_044210(a0, (char *)a0 + 0x200, a0->f23C);
}
