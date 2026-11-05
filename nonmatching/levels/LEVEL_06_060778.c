/* LEVEL_06.REL:0x060778, bounded 44-byte body.
 * Pinned C links 40 against the 44-byte retail body; the
 * first difference at byte +8 is branch displacement.
 * The retail boolean return keeps an extra value transfer.
 * Reopen: recover the original return lifetime or qualify a
 * compiler route retaining that transfer. A wide return
 * reaches 44 bytes but selects a different conditional move.
 */
extern unsigned char D_00225F1C;

int func_060778(char *record)
{
    return *(short *)(record + 0x100) == 0x21 && (D_00225F1C & 2) == 0;
}
