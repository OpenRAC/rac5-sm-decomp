/* LEVEL_18.REL:0x054EA0, bounded 44-byte body.
 * Pinned C links 40 against the 44-byte retail body; the
 * first difference at byte +8 is branch displacement.
 * The retail boolean return keeps an extra value transfer.
 * Reopen: recover the original return lifetime or qualify a
 * compiler route retaining that transfer. A wide return
 * reaches 44 bytes but selects a different conditional move.
 */
extern unsigned char D_001EBBEC;

int func_054EA0(char *record)
{
    return *(short *)(record + 0x100) == 0x21 && (D_001EBBEC & 2) == 0;
}
