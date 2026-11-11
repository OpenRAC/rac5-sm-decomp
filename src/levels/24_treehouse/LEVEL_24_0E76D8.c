extern char D_002FC4AC[];
extern void func_0E7570(void *obj, void *pos, void *vel, float f);

void func_0E76D8(int index, void *pos, void *vel, float f)
{
    func_0E7570(D_002FC4AC + index * 100, pos, vel, f);
}
