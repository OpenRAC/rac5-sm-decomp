/* LEVEL_19:0x08F7D0 -- placement copy of FRONTEND_006468.c: stores a 64-bit difference into a ring slot. */
extern long long func_091590(void);
extern long long D_001A5880;
extern unsigned int D_001A5890;
extern int D_00256B90[];

void func_08F7D0(void)
{
    long long result = func_091590();
    D_00256B90[D_001A5890 & 0x1f] = (int)(result - D_001A5880);
}
