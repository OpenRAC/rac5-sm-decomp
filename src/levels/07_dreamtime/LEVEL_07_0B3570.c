/* LEVEL_07:0x0B3570 -- placement copy of LEVEL_01_0B1570.c: runs func_0B3560, then stores a byte and a second byte widened to a word in two globals. */
extern unsigned char D_00210458;
extern unsigned int D_00210454;
extern unsigned int func_0B3560(void);

void func_0B3570(int a, unsigned char b)
{
    func_0B3560();
    D_00210458 = a;
    D_00210454 = b;
}
