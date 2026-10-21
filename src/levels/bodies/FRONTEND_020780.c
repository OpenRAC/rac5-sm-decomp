/* FRONTEND:0x020780 -- saves, calls the shared import, reports 3 or 1. */
extern int func_000000(void);

int func_020780(void)
{
    int v = func_000000();

    if (v != 0)
        return 3;
    return 1;
}
