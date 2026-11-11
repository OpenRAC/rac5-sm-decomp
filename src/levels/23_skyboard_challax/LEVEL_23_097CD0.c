
void sceGsResetPath();
void sceGsSyncPath(int, int);
void func_097C08(int);

void func_097CD0(void)
{
    sceGsResetPath();
    sceGsSyncPath(0, 0);
    func_097C08(0);
}
