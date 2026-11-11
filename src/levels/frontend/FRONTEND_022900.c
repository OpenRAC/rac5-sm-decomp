extern char D_00109FA8[];
void func_022A08(int *);

int *func_022900(int *p)
{
    p[5] = (int)D_00109FA8;
    func_022A08(p);
    p[1] = 0;
    return p;
}
