extern void func_1E1000(int owner);
extern void func_1E06F8(void);
extern int D_003B3D14;

void func_1E0740(int value)
{
    func_1E1000(value);
    if (value == D_003B3D14) func_1E06F8();
}
