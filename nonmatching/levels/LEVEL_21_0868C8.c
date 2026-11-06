/* LEVEL_21.REL:0x0868C8, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +2.
 * The pinned compiler links 56 bytes but assigns different registers to the 24-byte stride and data base at entry. Reopen with the original record or call-argument type.
 */
extern char D_001CB498[];
extern void func_086948(void *, long long, unsigned char, unsigned char, unsigned char);

void func_0868C8(int index, long long value, unsigned char first, unsigned char second, unsigned char third)
{
    func_086948(D_001CB498 + index * 0x18, value, first, second, third);
}
