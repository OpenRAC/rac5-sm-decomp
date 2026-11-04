
void sceGsResetPath();
void sceGsSyncPath(int, int);
void func_09F488(int);

void func_09F550(void)
{
    sceGsResetPath();
    sceGsSyncPath(0, 0);
    func_09F488(0);
}
