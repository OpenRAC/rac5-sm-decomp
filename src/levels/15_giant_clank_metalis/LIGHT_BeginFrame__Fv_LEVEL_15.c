extern char db_dlist[];
extern int D_0014AFD0;
extern int D_0014AFD4;
extern int D_0014AFCC;
void LIGHT_BeginFrame__Fv(void)
{
    char *list = *(char **)(db_dlist + 0x54);
    int *slot = (int *)(list + 0x24);
    int delta = 0x28000;
    int value = *slot - delta;
    *slot = value;
    D_0014AFCC = value;
    D_0014AFD0 = value;
    D_0014AFD4 = delta;
}