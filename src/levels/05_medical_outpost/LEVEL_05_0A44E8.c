extern char D_0029F318[];

void func_0A4358(char *);
void func_0A44B8(int, int);

void func_0A44E8(int i)
{
    func_0A4358(D_0029F318 + i * 0x18);
    if (i == 6)
        func_0A44B8(6, 0);
}
