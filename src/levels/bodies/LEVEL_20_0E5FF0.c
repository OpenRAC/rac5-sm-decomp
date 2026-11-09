/* LEVEL_20:0x0E5FF0 -- placement copy of LEVEL_16_113480.c: runs a short shutdown sequence when a pending flag is set, then clears a status byte. */

extern int D_001172E4;
extern unsigned char D_001172F0;

void func_02E170(void);
void func_0E91B8(void);
void func_0EB0F0(void);

void func_0E5FF0(void)
{
    if (D_001172E4 == 1) {
        func_02E170();
        D_001172E4 = 0;
        func_0E91B8();
        func_0EB0F0();
    }
    D_001172F0 = 0;
}
