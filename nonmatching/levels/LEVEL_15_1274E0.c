/* USA LEVEL_15.REL:0x1274E0, 96-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 96 linked bytes; first differing word +0x8.
 * Unaccepted; no matching credit. Recover the signed address-order loop contract and original aggregate type; the pointer-range loop currently uses an unsigned address comparison.
 */
extern char D_2F2D20[];
extern void func_1269F0(char *record);
void func_1274E0(void)
{
    char *p = D_2F2D20;
    char *record = p + 4;
    char *end = p + 0xB4;
    do {
        func_1269F0(record);
        *(int *)(p + 0x34) = 0;
        *(int *)(p + 0x38) = 0;
        p += 0x3C;
        record += 0x3C;
    } while (p < end);
}
