/* LEVEL_20:0x0E6240 -- placement copy of LEVEL_16_1136D0.c. */
extern char *func_0E5858(int);
extern int D_0011A920[];

int func_0E6240(void)
{
    char *record = ((char * (*)(void))func_0E5858)();
    return D_0011A920[*(int *)(record + 0xfc8) + 1];
}
