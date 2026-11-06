extern void func_110A08(unsigned int);
extern int D_001EDEF8;
void func_0BCC58(unsigned int *slot)
{
    func_110A08(*slot);
    *slot = 0xffffffffu;
    D_001EDEF8 = 0;
}