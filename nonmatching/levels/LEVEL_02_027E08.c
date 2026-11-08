/* LEVEL_02.REL:0x027E08: reviewed 92-byte candidate.
 * pinned C with gnu-ee-trial links 88 bytes; first differs at +16.
 * Retry: Recover the local callee ABI and call-delay argument transfer, then the
 * global-byte update branch flow.
 * No matching credit.
 */
extern unsigned char *D_00208C2C;
extern int func_027D88(unsigned int value);

int func_027E08(unsigned int value)
{
    if (value >= 100)
        return 0;
    if (func_027D88(value) == 0)
        return 0;
    D_00208C2C[0x1b60 + value] |= 1;
    return 1;
}
