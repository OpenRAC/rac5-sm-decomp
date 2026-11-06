/* LEVEL_16.REL:0x022C28, bounded 48-byte body.
 * Pinned C links 48 bytes but first differs at byte +6:
 * the unsigned range result and branch use different
 * registers and block order from the retail function.
 * Reopen: recover the original result lifetime or qualify a
 * compiler route preserving that branch. Positive and local
 * result forms and five other cc1 routes did not match.
 */
extern char *func_0220C8(void);

int func_022C28(unsigned int index)
{
    if (index >= 25)
        return -1;
    return *(int *)(func_0220C8() + 0x3c);
}
