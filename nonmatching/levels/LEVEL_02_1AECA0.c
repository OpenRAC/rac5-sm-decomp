/* USA LEVEL_02.REL:0x1AECA0, 128-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 128 linked bytes; no differing word in the isolated link.
 * Unaccepted; no matching credit. Reconcile the proven return/argument domains, all callers and complete function bounds before promotion.
 */
extern char D_24C650[];
extern char *func_01ACB0(void);
extern int func_08B060(char *region, char *point);
extern int func_03D480(char *object);
void func_1AECA0(char *object)
{
    char *resource = *(char **)(object + 0x54);
    if (*(char **)(resource + 0xC) && func_08B060(*(char **)(resource + 0xC), func_01ACB0())) {
        object[0x45] = 1;
        *(float *)(object + 0x70) = 30.0f;
    } else if (!(unsigned char)func_03D480(D_24C650)) {
        object[0x45] = 0;
    }
}
