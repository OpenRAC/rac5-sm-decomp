extern unsigned char D_00207058[];

void func_087320(int);

void func_133010(int value)
{
    D_00207058[0] = value;
    func_087320(value ^ 1);
}
