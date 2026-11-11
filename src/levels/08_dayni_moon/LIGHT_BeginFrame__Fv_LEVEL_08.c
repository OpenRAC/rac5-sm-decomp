extern char db_dlist[];
extern int D_0023F210;
extern int D_0023F214;
extern int D_00028000;
extern int D_0023F20C;
void LIGHT_BeginFrame__Fv(void)
{
    char *list = *(char **)(db_dlist + 0x54);
    int *slot = (int *)(list + 0x24);
    int delta = 0x28000;
    int value = *slot - delta;
    *slot = value;
    D_0023F20C = value;
    D_0023F210 = value;
    D_0023F214 = delta;
}
