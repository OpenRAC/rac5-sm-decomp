extern char D_0029ABD8[];

void func_0A3048(char *);
void func_0A31A8(int, int);

void func_0A31D8(int i)
{
    func_0A3048(D_0029ABD8 + i * 0x18);
    if (i == 6)
        func_0A31A8(6, 0);
}
