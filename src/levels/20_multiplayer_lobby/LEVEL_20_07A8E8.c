
void sceGsResetPath();
void sceGsSyncPath(int, int);
void func_07A820(int);

void func_07A8E8(void)
{
    sceGsResetPath();
    sceGsSyncPath(0, 0);
    func_07A820(0);
}
