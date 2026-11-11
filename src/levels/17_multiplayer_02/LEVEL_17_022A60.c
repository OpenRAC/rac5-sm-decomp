/* LEVEL_17:0x022A60 -- placement copy of FRONTEND_0004D8.c: returns 1 if either of two global flags is set, else 0. */
extern int D_00195094;
extern int D_00195074;

int func_022A60(void)
{
    if (D_00195094 || D_00195074)
        return 1;
    return 0;
}
