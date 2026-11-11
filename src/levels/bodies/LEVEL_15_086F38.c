extern int func_088480(int idx, float *pos);
extern int func_087338(unsigned int slot, unsigned int mode);

void func_086F38(int slot, float *pos)
{
    int zone = func_088480(slot, pos);
    func_087338(slot, zone);
}
