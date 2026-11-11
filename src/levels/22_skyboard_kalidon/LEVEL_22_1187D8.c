/* LEVEL_22:0x1187D8 -- rebuilds a flag word with fixed bit patterns, runs two helpers on a stack buffer, and stores the second result. */

extern void func_087718(void *a0, unsigned int a1, unsigned int a2, int a3, int a4, int a5, int a6);
extern int func_0878F0(void *a0);
extern char D_00119048[];

void func_1187D8(int *a0, unsigned int a1)
{
    int buf[4];
    unsigned int m;

    m = (a1 & 0xFFFFFFC3) | 0x18;
    m = (m & 0xFFFFFFFC) | 1;
    func_087718(buf, m, (unsigned int)D_00119048, 0x40, 0, -1, 0);
    *a0 = func_0878F0(buf);
}
