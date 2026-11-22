/* USA LEVEL_01.REL:0x0A6F58, 208-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 3 differing words; first difference at 0x98.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern unsigned char *D_001F3FAC;
extern char D_00315560[];
extern void *memset(void *, int, unsigned int);

int func_0A6F58(void)
{
    unsigned int i;
    unsigned int j;
    unsigned char *p;

    memset(D_001F3FAC + 0x10480, 0, 0xE);
    memset(D_00315560, 0, 0x8000);
    for (i = 0; i < 14; i++) {
        p = D_001F3FAC + (i * 0x1000 + 0x1C80);
        p[0] = 'R';
        p[1] = 'E';
        p[2] = '0';
        p[3] = '0';
        *(int *)(p + 4) = 0x8000;
        *(int *)(p + 8) = 0x20C;
        p += 12;
        for (j = 0; j < 256; j++) {
            *p++ = 0xFF;
            *p++ = 0;
        }
    }
    return 1;
}
