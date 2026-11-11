extern int func_080940(int idx, float *pos);
extern int func_0800B0(unsigned int slot, unsigned int mode);

void func_07FF98(int slot, float *pos)
{
    int zone = func_080940(slot, pos);
    func_0800B0(slot, zone);
}
