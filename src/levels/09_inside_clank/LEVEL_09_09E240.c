
void sceGsResetPath();
void sceGsSyncPath(int, int);
void func_09E178(int);

void func_09E240(void)
{
    sceGsResetPath();
    sceGsSyncPath(0, 0);
    func_09E178(0);
}
