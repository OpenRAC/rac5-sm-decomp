/* FRONTEND:0x0213B0 -- candidate b: int-offset stores force the pointer reload. */
extern int D_003282C;
extern int D_0032830;

int func_0213B0(int a0, int a1, int a2, int a3, int a4)
{
    if (D_0032830 == 0)
        return 0;
    if (a0 != D_0032830)
        return 0;
    if (a1 == 0 || a2 == 0 || a3 == 0)
        goto fail;
    if (*(int *)D_003282C != 0)
        goto fail;
    if (*(int *)(D_003282C + 4) != 0)
        goto fail;
    *(int *)(D_003282C + 12) = a1;
    *(int *)(D_003282C + 8) = a2;
    *(int *)(D_003282C + 20) = a3;
    *(int *)(D_003282C + 16) = a4;
    return 1;
fail:
    return 0;
}
