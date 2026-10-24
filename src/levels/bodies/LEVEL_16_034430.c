typedef struct {
    char pad[0xF4];
    int fF4;
} S;

extern S D_001E7A80;
extern char D_001E4090[];

void func_034280(void *a0, float f12);

void func_034430(float f12)
{
    func_034280(D_001E4090, f12);
    if (D_001E7A80.fF4 == 0)
        return;
    func_034280(&D_001E7A80, f12);
}
