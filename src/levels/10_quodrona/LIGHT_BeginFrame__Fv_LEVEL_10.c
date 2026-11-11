extern char db_dlist[];
extern int D_001FF350;
extern int D_001FF354;
extern int D_001FF34C;
void LIGHT_BeginFrame__Fv(void)
{
    char *list = *(char **)(db_dlist + 0x54);
    int *slot = (int *)(list + 0x24);
    int delta = 0x28000;
    int value = *slot - delta;
    *slot = value;
    D_001FF34C = value;
    D_001FF350 = value;
    D_001FF354 = delta;
}