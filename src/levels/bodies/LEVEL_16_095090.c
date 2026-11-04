extern char D_0026AFA8[];

void func_094ED8(char *);
void func_095060(int, int);

void func_095090(int i)
{
    func_094ED8(D_0026AFA8 + i * 0x18);
    if (i == 6)
        func_095060(6, 0);
}
