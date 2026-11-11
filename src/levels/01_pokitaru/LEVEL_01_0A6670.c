extern int func_0A7BB8(int idx, float *pos);
extern int func_0A6A70(unsigned int slot, unsigned int mode);

void func_0A6670(int slot, float *pos)
{
    int zone = func_0A7BB8(slot, pos);
    func_0A6A70(slot, zone);
}
