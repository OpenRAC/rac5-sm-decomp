/* LEVEL_20:0x01FD88 -- placement copy of FRONTEND_0004D8.c: returns 1 if either of two global flags is set, else 0. */
extern int D_00104174;
extern int D_00104154;

int func_01FD88(void)
{
    if (D_00104174 || D_00104154)
        return 1;
    return 0;
}
