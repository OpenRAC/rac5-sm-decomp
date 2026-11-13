/* USA LEVEL_16.REL:0x118CA0, 164-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 164 linked bytes; first differing word +0x1C.
 * Unaccepted; no matching credit. Recover the snapshot record and alias contracts before revisiting global-base scheduling.
 */
extern unsigned char D_1B84F8, D_1B8508;
extern unsigned int D_2E00D8;
extern char *D_2E00DC, *D_1B8504, *D_1B850C;
extern char *func_118D50(char *p);
void func_118CA0(void)
{
    if (D_1B84F8) {
        ++D_2E00D8;
        if (D_2E00DC) {
            *(int *)D_1B8504 = D_1B850C ? *(int *)(D_1B850C + 0xF4) : 0;
            D_1B8504[4] = D_2E00DC[0x45];
            D_1B8504[5] = D_2E00DC[0x46];
            D_1B8504[6] = D_1B8508;
            D_1B8508 = 0;
            D_1B8504 = func_118D50(D_1B8504);
        }
    }
}
