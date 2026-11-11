extern int func_0B24B0(int idx, float *pos);
extern int func_0B1368(unsigned int slot, unsigned int mode);

void func_0B0F68(int slot, float *pos)
{
    int zone = func_0B24B0(slot, pos);
    func_0B1368(slot, zone);
}
