
void sceGsResetPath();
void sceGsSyncPath(int, int);
void func_090128(int);

void func_0901F0(void)
{
    sceGsResetPath();
    sceGsSyncPath(0, 0);
    func_090128(0);
}
