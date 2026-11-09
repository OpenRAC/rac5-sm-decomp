/* FRONTEND:0x0004D8 -- returns 1 if either of two global flags is set, else 0. */
extern int D_00027E1C;
extern int D_00027DFC;

int func_0004D8(void)
{
    if (D_00027E1C || D_00027DFC)
        return 1;
    return 0;
}
