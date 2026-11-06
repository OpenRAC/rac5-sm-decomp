/* LEVEL_17.REL:0x0225A8, bounded 48-byte body.
 * Pinned C links 48 bytes but first differs at byte +6:
 * the unsigned range result and branch use different
 * registers and block order from the retail function.
 * Reopen: recover the original result lifetime or qualify a
 * compiler route preserving that branch. Positive and local
 * result forms and five other cc1 routes did not match.
 */
extern char *func_021A48(void);

int func_0225A8(unsigned int index)
{
    if (index >= 25)
        return -1;
    return *(int *)(func_021A48() + 0x3c);
}
