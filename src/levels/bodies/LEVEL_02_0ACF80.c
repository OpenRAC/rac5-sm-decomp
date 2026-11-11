extern int func_0AE4C8(int idx, float *pos);
extern int func_0AD380(unsigned int slot, unsigned int mode);

void func_0ACF80(int slot, float *pos)
{
    int zone = func_0AE4C8(slot, pos);
    func_0AD380(slot, zone);
}
