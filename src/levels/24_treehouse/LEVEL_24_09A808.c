
void sceGsResetPath();
void sceGsSyncPath(int, int);
void func_09A740(int);

void func_09A808(void)
{
    sceGsResetPath();
    sceGsSyncPath(0, 0);
    func_09A740(0);
}
