
void sceGsResetPath();
void sceGsSyncPath(int, int);
void func_09B698(int);

void func_09B760(void)
{
    sceGsResetPath();
    sceGsSyncPath(0, 0);
    func_09B698(0);
}
