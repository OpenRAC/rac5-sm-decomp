/* LEVEL_20.REL:0x01F8D0, bounded 48-byte body.
 * Pinned C links 48 bytes but first differs at byte +6:
 * the unsigned range result and branch use different
 * registers and block order from the retail function.
 * Reopen: recover the original result lifetime or qualify a
 * compiler route preserving that branch. Positive and local
 * result forms and five other cc1 routes did not match.
 */
extern char *func_01EDC8(void);

int func_01F8D0(unsigned int index)
{
    if (index >= 25)
        return -1;
    return *(int *)(func_01EDC8() + 0x3c);
}
