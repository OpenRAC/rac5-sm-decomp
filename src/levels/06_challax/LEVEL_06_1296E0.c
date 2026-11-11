extern unsigned char D_001F5C58[];

void func_080198(int);

void func_1296E0(int value)
{
    D_001F5C58[0] = value;
    func_080198(value ^ 1);
}
