extern char db_dlist[];
extern int D_0020E9D0;
extern int D_0020E9D4;
extern int D_0020E9CC;
void LIGHT_BeginFrame__Fv(void)
{
    char *list = *(char **)(db_dlist + 0x54);
    int *slot = (int *)(list + 0x24);
    int delta = 0x28000;
    int value = *slot - delta;
    *slot = value;
    D_0020E9CC = value;
    D_0020E9D0 = value;
    D_0020E9D4 = delta;
}