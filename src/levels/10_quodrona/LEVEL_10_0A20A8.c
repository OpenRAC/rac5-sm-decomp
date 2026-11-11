
void sceGsResetPath();
void sceGsSyncPath(int, int);
void func_0A1FE0(int);

void func_0A20A8(void)
{
    sceGsResetPath();
    sceGsSyncPath(0, 0);
    func_0A1FE0(0);
}
