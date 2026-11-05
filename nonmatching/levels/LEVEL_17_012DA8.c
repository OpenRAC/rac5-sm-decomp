/* LEVEL_17.REL:0x012DA8, bounded 40-byte body.
 * Pinned C links 36 bytes against this 40-byte retail body;
 * first difference is the branch displacement at byte +12.
 * The retail return path retains one extra value transfer.
 * Reopen: recover the original boolean value lifetime or a
 * qualified compiler route that emits that transfer. Natural
 * conditional forms and five qualified cc1 routes did not.
 */
extern unsigned char D_001CF7D0[];

int func_012DA8(void)
{
    return D_001CF7D0[1] != 0 && D_001CF7D0[0] == 0;
}
