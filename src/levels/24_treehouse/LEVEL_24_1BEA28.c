extern char D_001F7310[];

void func_1BEA28(int *p, int value)
{
    if (p)
    {
        p[0] = value;
        p[1] = (int)D_001F7310;
    }
}
