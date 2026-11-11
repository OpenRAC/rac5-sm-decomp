extern unsigned char D_001F0B58[];

void func_083CD8(int);

void func_12BFA8(int value)
{
    D_001F0B58[0] = value;
    func_083CD8(value ^ 1);
}
