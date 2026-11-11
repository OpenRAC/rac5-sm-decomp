extern char D_0027F318[];

void func_09F610(char *);
void func_09F770(int, int);

void func_09F7A0(int i)
{
    func_09F610(D_0027F318 + i * 0x18);
    if (i == 6)
        func_09F770(6, 0);
}
