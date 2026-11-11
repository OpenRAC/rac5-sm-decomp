extern char D_0010A1B8[];
void func_024180(int *, unsigned int);

void func_026848(int *p, unsigned int flag)
{
    p[1] = (int)D_0010A1B8;
    if (flag & 1)
        func_024180(p, flag & 1);
}
