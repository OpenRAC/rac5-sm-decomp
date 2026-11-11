extern int func_0961C8(int idx, float *pos);
extern int func_095080(unsigned int slot, unsigned int mode);

void func_094C80(int slot, float *pos)
{
    int zone = func_0961C8(slot, pos);
    func_095080(slot, zone);
}
