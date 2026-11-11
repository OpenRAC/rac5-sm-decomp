extern char D_00284898[];

void func_09CAD8(char *);
void func_09CC38(int, int);

void func_09CC68(int i)
{
    func_09CAD8(D_00284898 + i * 0x18);
    if (i == 6)
        func_09CC38(6, 0);
}
