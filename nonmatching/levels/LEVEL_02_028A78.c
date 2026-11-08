/* LEVEL_02.REL:0x028A78: reviewed 68-byte candidate.
 * pinned C with gnu-ee-trial links 64 bytes; first differs at +20.
 * Retry: Recover the separate loaded boolean and saved-result transfer; current C
 * links 64 of 68 bytes.
 * No matching credit.
 */
extern int func_028AC0(void);
extern char *D_00208C2C;

int func_028A78(void)
{
    int result = 0;
    if (func_028AC0() == 0)
        result = *(unsigned int *)(D_00208C2C + 0x1C78) != 0;
    return result;
}
