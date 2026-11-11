/* FRONTEND:0x020780 -- saves, calls the shared import, reports 3 or 1. */
extern int MEMCARD_Saving__Fv(void);

int func_020780(int a)
{
    int v = MEMCARD_Saving__Fv();

    if (v != 0)
        return 3;
    return 1;
}
