/* LEVEL_04:0x14FA38 -- for three steps, passes a looked-up word and a fixed mask to a helper and returns 0 at the first result other than 5; returns 1 when all three match. */
extern int func_14F988(int a0);
extern int func_027098(int a0, int a1);
extern char D_00234170[];
extern int D_002208D0[];

int func_14FA38(void)
{
    unsigned int i;
    int r;
    char *q;
    int ret;

    i = 0;
    do {
        r = func_14F988(*(int *)D_00234170);
        q = (char *)D_002208D0[r] + (i << 2);
        ret = func_027098(*(int *)(q + 0x18), 0xFF);
        if (ret != 5) {
            return 0;
        }
        i++;
    } while (i < 3);
    return 1;
}
