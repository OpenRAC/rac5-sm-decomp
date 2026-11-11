extern unsigned char D_0024FF18[];

void func_08F370(int);

void func_144548(int value)
{
    D_0024FF18[0] = value;
    func_08F370(value ^ 1);
}
