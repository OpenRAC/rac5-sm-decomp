extern int func_0A9BB8(int idx, float *pos);
extern int func_0A8A70(unsigned int slot, unsigned int mode);

void func_0A8670(int slot, float *pos)
{
    int zone = func_0A9BB8(slot, pos);
    func_0A8A70(slot, zone);
}
