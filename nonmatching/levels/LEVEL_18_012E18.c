/* LEVEL_18.REL:0x012E18, bounded 40-byte body.
 * Pinned C links 36 bytes against this 40-byte retail body;
 * first difference is the branch displacement at byte +12.
 * The retail return path retains one extra value transfer.
 * Reopen: recover the original boolean value lifetime or a
 * qualified compiler route that emits that transfer. Natural
 * conditional forms and five qualified cc1 routes did not.
 */
extern unsigned char D_001DE850[];

int func_012E18(void)
{
    return D_001DE850[1] != 0 && D_001DE850[0] == 0;
}
