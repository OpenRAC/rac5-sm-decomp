
void sceGsResetPath();
void sceGsSyncPath(int, int);
void func_0A2EC8(int);

void func_0A2F90(void)
{
    sceGsResetPath();
    sceGsSyncPath(0, 0);
    func_0A2EC8(0);
}
