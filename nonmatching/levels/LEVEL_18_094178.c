/* LEVEL_18.REL:0x094178, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +2.
 * The pinned compiler links 56 bytes but assigns different registers to the 24-byte stride and data base at entry. Reopen with the original record or call-argument type.
 */
extern char D_0026B328[];
extern void func_094220(void *, long long, unsigned char, unsigned char, unsigned char);

void func_094178(int index, long long value, unsigned char first, unsigned char second, unsigned char third)
{
    func_094220(D_0026B328 + index * 0x18, value, first, second, third);
}
