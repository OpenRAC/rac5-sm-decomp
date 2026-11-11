extern int func_095AD8(int idx, float *pos);
extern int func_095248(unsigned int slot, unsigned int mode);

void func_095130(int slot, float *pos)
{
    int zone = func_095AD8(slot, pos);
    func_095248(slot, zone);
}
