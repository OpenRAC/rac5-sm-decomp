
void sceGsResetPath();
void sceGsSyncPath(int, int);
void func_0A0EC8(int);

void func_0A0F90(void)
{
    sceGsResetPath();
    sceGsSyncPath(0, 0);
    func_0A0EC8(0);
}
