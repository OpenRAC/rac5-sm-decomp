extern int func_095740(int idx, float *pos);
extern int func_094EB0(unsigned int slot, unsigned int mode);

void func_094D98(int slot, float *pos)
{
    int zone = func_095740(slot, pos);
    func_094EB0(slot, zone);
}
