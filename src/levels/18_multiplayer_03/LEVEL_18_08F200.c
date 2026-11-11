
void sceGsResetPath();
void sceGsSyncPath(int, int);
void func_08F138(int);

void func_08F200(void)
{
    sceGsResetPath();
    sceGsSyncPath(0, 0);
    func_08F138(0);
}
