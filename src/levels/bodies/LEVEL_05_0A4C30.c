extern int func_0A6178(int idx, float *pos);
extern int func_0A5030(unsigned int slot, unsigned int mode);

void func_0A4C30(int slot, float *pos)
{
    int zone = func_0A6178(slot, pos);
    func_0A5030(slot, zone);
}
