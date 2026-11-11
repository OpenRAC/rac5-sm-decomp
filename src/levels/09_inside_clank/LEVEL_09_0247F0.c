/* LEVEL_09:0x0247F0 -- placement copy of FRONTEND_0004D8.c: returns 1 if either of two global flags is set, else 0. */
extern int D_001DDD8C;
extern int D_001DDD6C;

int func_0247F0(void)
{
    if (D_001DDD8C || D_001DDD6C)
        return 1;
    return 0;
}
