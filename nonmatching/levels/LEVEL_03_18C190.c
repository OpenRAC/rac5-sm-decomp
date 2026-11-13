/* USA LEVEL_03.REL:0x18C190, 100-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 100 linked bytes; no differing word in the isolated link.
 * Unaccepted; no matching credit. Reconcile the proven return/argument domains, all callers and complete function bounds before promotion.
 */
extern void func_0180C0(int id, int mode);
void func_18C190(unsigned char *object)
{
    unsigned int i;
    unsigned char *id = *(unsigned char **)(object + 0x54) + 0x21;
    for (i = 0; i < 5; ++i, ++id)
        if (*id != 255) func_0180C0(*id, 0);
}
