/* FRONTEND.REL:0x021548, bounded 148-byte candidate.
 * Isolated pinned C object: 148 bytes; first linked
 * difference at body byte +34. Not linked into the accepted
 * gate or counted.
 * Reopen: All instructions and the size match except a v0/v1 pair: the constant lands in v0 and the %hi in v1, the reverse of the retail. Reopen by changing the lifetime of the constant pseudo or sinking the address computation.
 */
extern unsigned char DAT_00032851;
extern unsigned char DAT_00032852;
extern int DAT_001EC1D0[];
extern int func_0083B8(void);

unsigned char func_00021548(void)
{
    unsigned int value;
    unsigned int i;
    int *p;

    if (DAT_00032851 == 0) {
        DAT_00032851 = 1;
        p = DAT_001EC1D0;
        i = 0;
        do {
            value = (unsigned int)func_0083B8();
            if (value == 0xFFFFFFFFu)
                return 0;
            *p = (int)value;
            i++;
            p++;
        } while (i < 6);
        DAT_00032852 = 1;
    }
    return DAT_00032852;
}
