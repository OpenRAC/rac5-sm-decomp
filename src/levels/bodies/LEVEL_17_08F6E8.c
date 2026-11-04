
void sceGsResetPath();
void sceGsSyncPath(int, int);
void func_08F620(int);

void func_08F6E8(void)
{
    sceGsResetPath();
    sceGsSyncPath(0, 0);
    func_08F620(0);
}
