
void sceGsResetPath();
void sceGsSyncPath(int, int);
void func_08F9B8(int);

void func_08FA80(void)
{
    sceGsResetPath();
    sceGsSyncPath(0, 0);
    func_08F9B8(0);
}
