extern int func_0A8CD0(int idx, float *pos);
extern int func_0A7B88(unsigned int slot, unsigned int mode);

void func_0A7788(int slot, float *pos)
{
    int zone = func_0A8CD0(slot, pos);
    func_0A7B88(slot, zone);
}
