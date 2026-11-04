
void sceGsResetPath();
void sceGsSyncPath(int, int);
void func_08F4D8(int);

void func_08F5A0(void)
{
    sceGsResetPath();
    sceGsSyncPath(0, 0);
    func_08F4D8(0);
}
