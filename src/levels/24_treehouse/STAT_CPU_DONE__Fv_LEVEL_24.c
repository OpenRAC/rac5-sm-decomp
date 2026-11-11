/* LEVEL_24:0x09A4F0 -- placement copy of FRONTEND_006468.c: stores a 64-bit difference into a ring slot. */
extern long long func_09C318(void);
extern long long D_001C73B0;
extern unsigned int D_001C73C0;
extern int D_0026AD80[];

void STAT_CPU_DONE__Fv(void)
{
    long long result = func_09C318();
    D_0026AD80[D_001C73C0 & 0x1f] = (int)(result - D_001C73B0);
}
