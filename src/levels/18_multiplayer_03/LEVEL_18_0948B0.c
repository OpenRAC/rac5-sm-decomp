extern int func_095258(int idx, float *pos);
extern int func_0949C8(unsigned int slot, unsigned int mode);

void func_0948B0(int slot, float *pos)
{
    int zone = func_095258(slot, pos);
    func_0949C8(slot, zone);
}
