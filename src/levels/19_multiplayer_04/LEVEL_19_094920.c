extern char D_0026B128[];

void func_094768(char *);
void func_0948F0(int, int);

void func_094920(int i)
{
    func_094768(D_0026B128 + i * 0x18);
    if (i == 6)
        func_0948F0(6, 0);
}
