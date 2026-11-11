extern unsigned long long D_001A4700;
extern unsigned long long D_001A4708;
extern unsigned long long func_091D00(void);

void STAT_BeginFrame__Fv(void)
{
    D_001A4700 = func_091D00();
    D_001A4708 = D_001A4700;
}
