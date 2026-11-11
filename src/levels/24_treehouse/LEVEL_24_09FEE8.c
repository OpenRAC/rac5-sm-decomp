extern int func_0A1430(int idx, float *pos);
extern int func_0A02E8(unsigned int slot, unsigned int mode);

void func_09FEE8(int slot, float *pos)
{
    int zone = func_0A1430(slot, pos);
    func_0A02E8(slot, zone);
}
