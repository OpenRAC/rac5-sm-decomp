/* LEVEL_24:0x139108 -- placement copy of LEVEL_04_14FA38.c: for three steps, passes a looked-up word and a fixed mask to a helper and returns 0 at the first result other than 5; returns 1 when all three match. */
extern int func_139058(int a0);
extern int func_024D38(int a0, int a1);
extern char D_001EB570[];
extern int D_001D8130[];

int func_139108(void)
{
    unsigned int i;
    int r;
    char *q;
    int ret;

    i = 0;
    do {
        r = func_139058(*(int *)D_001EB570);
        q = (char *)D_001D8130[r] + (i << 2);
        ret = func_024D38(*(int *)(q + 0x18), 0xFF);
        if (ret != 5) {
            return 0;
        }
        i++;
    } while (i < 3);
    return 1;
}
