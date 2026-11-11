extern int func_09E928(int idx, float *pos);
extern int func_09D7E0(unsigned int slot, unsigned int mode);

void func_09D3E0(int slot, float *pos)
{
    int zone = func_09E928(slot, pos);
    func_09D7E0(slot, zone);
}
