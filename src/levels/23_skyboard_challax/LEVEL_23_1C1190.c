extern char D_001F88E0[];

void func_1C1190(int *p, int value)
{
    if (p)
    {
        p[0] = value;
        p[1] = (int)D_001F88E0;
    }
}
