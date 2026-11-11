extern int func_0ACDC8(int idx, float *pos);
extern int func_0ABC80(unsigned int slot, unsigned int mode);

void func_0AB880(int slot, float *pos)
{
    int zone = func_0ACDC8(slot, pos);
    func_0ABC80(slot, zone);
}
