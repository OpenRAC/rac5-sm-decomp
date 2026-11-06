/* LEVEL_02.REL:0x027FD0, bounded 176-byte candidate.
 * Isolated pinned C object: 164 bytes; first linked
 * difference at body byte +5. Not linked into the accepted
 * gate or counted.
 * Reopen: Recheck the measured register or order difference.
 */
extern unsigned int *D_00208C2C;
extern void *memcpy(void *dst, const void *src, unsigned int n);

int func_027FD0(int value)
{
    unsigned int i;

    i = 0;
    do {
        unsigned int next = i + 1;

        if (D_00208C2C[i + 0x20] == value) {
            if (D_00208C2C[0x39] != next) {
                memcpy(&D_00208C2C[i + 0x20], &D_00208C2C[i + 0x21],
                       (D_00208C2C[0x39] - i) - 1);
                D_00208C2C[0x39] = D_00208C2C[0x39] - 1;
                D_00208C2C[D_00208C2C[0x39] + 0x20] = 0xFFFFFFFF;
                return 1;
            }
        }
        i = next;
    } while (i < 0x19);
    return 0;
}
