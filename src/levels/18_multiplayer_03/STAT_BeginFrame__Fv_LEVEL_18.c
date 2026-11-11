extern unsigned long long D_001A5B80;
extern unsigned long long D_001A5B88;
extern unsigned long long func_090D10(void);

void STAT_BeginFrame__Fv(void)
{
    D_001A5B80 = func_090D10();
    D_001A5B88 = D_001A5B80;
}
