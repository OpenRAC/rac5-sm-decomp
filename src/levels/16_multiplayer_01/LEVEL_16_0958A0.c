extern int func_096248(int idx, float *pos);
extern int func_0959B8(unsigned int slot, unsigned int mode);

void func_0958A0(int slot, float *pos)
{
    int zone = func_096248(slot, pos);
    func_0959B8(slot, zone);
}
