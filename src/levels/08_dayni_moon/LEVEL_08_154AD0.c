/* LEVEL_08:0x154AD0 -- placement copy of LEVEL_04_14FA38.c: for three steps, passes a looked-up word and a fixed mask to a helper and returns 0 at the first result other than 5; returns 1 when all three match. */
extern int func_154A20(int a0);
extern int func_027A30(int a0, int a1);
extern char D_00264470[];
extern int D_00250370[];

int func_154AD0(void)
{
    unsigned int i;
    int r;
    char *q;
    int ret;

    i = 0;
    do {
        r = func_154A20(*(int *)D_00264470);
        q = (char *)D_00250370[r] + (i << 2);
        ret = func_027A30(*(int *)(q + 0x18), 0xFF);
        if (ret != 5) {
            return 0;
        }
        i++;
    } while (i < 3);
    return 1;
}
