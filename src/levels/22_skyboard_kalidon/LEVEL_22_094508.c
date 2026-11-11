extern char D_00209018[];

void func_094378(char *);
void func_0944D8(int, int);

void func_094508(int i)
{
    func_094378(D_00209018 + i * 0x18);
    if (i == 6)
        func_0944D8(6, 0);
}
