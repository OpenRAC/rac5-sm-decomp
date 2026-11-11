extern int func_0A2388(int idx, float *pos);
extern int func_0A1240(unsigned int slot, unsigned int mode);

void func_0A0E40(int slot, float *pos)
{
    int zone = func_0A2388(slot, pos);
    func_0A1240(slot, zone);
}
