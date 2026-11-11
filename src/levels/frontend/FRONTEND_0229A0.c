/* FRONTEND:0x0229A0 -- fills the header fields and calls the builder. */
void func_022A30(int *);

void func_0229A0(int *p, int a1)
{
    int flag = 1;

    p[2] = a1;
    p[3] = flag;
    ((char *)p)[0x10] = flag;
    func_022A30(p);
}
