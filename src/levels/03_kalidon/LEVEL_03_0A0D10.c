
void sceGsResetPath();
void sceGsSyncPath(int, int);
void func_0A0C48(int);

void func_0A0D10(void)
{
    sceGsResetPath();
    sceGsSyncPath(0, 0);
    func_0A0C48(0);
}
