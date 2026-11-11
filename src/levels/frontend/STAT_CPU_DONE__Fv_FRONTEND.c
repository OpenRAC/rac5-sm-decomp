/* FRONTEND:0x006468 -- stores a 64-bit difference into a ring slot. */
extern long long func_007A58(void);
extern long long D_0002B010;
extern unsigned int D_0002B020;
extern int D_0010EB40[];

void STAT_CPU_DONE__Fv(void)
{
    long long result = func_007A58();
    D_0010EB40[D_0002B020 & 0x1f] = (int)(result - D_0002B010);
}
