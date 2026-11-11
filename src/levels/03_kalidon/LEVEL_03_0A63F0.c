extern int func_0A7938(int idx, float *pos);
extern int func_0A67F0(unsigned int slot, unsigned int mode);

void func_0A63F0(int slot, float *pos)
{
    int zone = func_0A7938(slot, pos);
    func_0A67F0(slot, zone);
}
