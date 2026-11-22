/* FRONTEND:0x020B80 -- placement copy of FRONTEND_021088.c. */
extern char D_00032814[];

unsigned int func_020B80(void)
{
    unsigned int *p = *(unsigned int **)D_00032814;

    if (p)
    {
        return *(unsigned int *)((char *)p + 0xc0);
    }
    return 0xFFFFFFFF;
}
