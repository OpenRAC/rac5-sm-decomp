extern char db_dlist[];
extern int D_001A4380;
extern int D_001A4384;
extern int D_001A437C;
void LIGHT_BeginFrame__Fv(void)
{
    char *list = *(char **)(db_dlist + 0x54);
    int *slot = (int *)(list + 0x24);
    int delta = 0x28000;
    int value = *slot - delta;
    *slot = value;
    D_001A437C = value;
    D_001A4380 = value;
    D_001A4384 = delta;
}