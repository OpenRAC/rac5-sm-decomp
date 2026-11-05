/* LEVEL_19.REL:0x0557F8, bounded 44-byte body.
 * Pinned C links 40 against the 44-byte retail body; the
 * first difference at byte +8 is branch displacement.
 * The retail boolean return keeps an extra value transfer.
 * Reopen: recover the original return lifetime or qualify a
 * compiler route retaining that transfer. A wide return
 * reaches 44 bytes but selects a different conditional move.
 */
extern unsigned char D_001EB9EC;

int func_0557F8(char *record)
{
    return *(short *)(record + 0x100) == 0x21 && (D_001EB9EC & 2) == 0;
}
