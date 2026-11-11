extern int func_0A4E68(int idx, float *pos);
extern int func_0A3D20(unsigned int slot, unsigned int mode);

void func_0A3920(int slot, float *pos)
{
    int zone = func_0A4E68(slot, pos);
    func_0A3D20(slot, zone);
}
