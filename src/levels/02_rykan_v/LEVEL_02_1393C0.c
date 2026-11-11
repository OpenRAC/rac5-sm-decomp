extern unsigned char D_0021C018[];

void func_08DC50(int);

void func_1393C0(int value)
{
    D_0021C018[0] = value;
    func_08DC50(value ^ 1);
}
