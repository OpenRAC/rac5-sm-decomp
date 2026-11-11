extern unsigned long long D_001E0530;
extern unsigned long long D_001E0538;
extern unsigned long long func_09FD50(void);

void STAT_BeginFrame__Fv(void)
{
    D_001E0530 = func_09FD50();
    D_001E0538 = D_001E0530;
}
