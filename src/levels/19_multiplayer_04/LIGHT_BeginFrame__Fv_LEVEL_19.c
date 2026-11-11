extern char db_dlist[];
extern int D_001A5500;
extern int D_001A5504;
extern int D_001A54FC;
void LIGHT_BeginFrame__Fv(void)
{
    char *list = *(char **)(db_dlist + 0x54);
    int *slot = (int *)(list + 0x24);
    int delta = 0x28000;
    int value = *slot - delta;
    *slot = value;
    D_001A54FC = value;
    D_001A5500 = value;
    D_001A5504 = delta;
}