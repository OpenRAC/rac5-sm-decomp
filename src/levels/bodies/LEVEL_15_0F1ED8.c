extern unsigned char D_0015B9B8[];

void func_06BA00(int);

void func_0F1ED8(int value)
{
    D_0015B9B8[0] = value;
    func_06BA00(value ^ 1);
}
