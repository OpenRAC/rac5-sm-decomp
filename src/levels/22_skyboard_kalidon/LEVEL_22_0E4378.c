/* LEVEL_22:0x0E4378 -- placement copy of LEVEL_01_100D88.c: masks a flag word and runs two table routines on a stack buffer. */

extern void func_087718(void *a0, unsigned int a1, unsigned int a2, int a3, int a4, int a5, int a6);
extern void func_0878F0(void *a0);
extern char D_000E3150[];

void func_0E4378(unsigned int a0)
{
    unsigned int buf[4];
    unsigned int m;

    m = (a0 & 0xFFFFFFC3) | 4;
    func_087718(buf, m & 0xFFFFFFFC, (unsigned int)D_000E3150, 60, 0, -1, 0);
    func_0878F0(buf);
}
