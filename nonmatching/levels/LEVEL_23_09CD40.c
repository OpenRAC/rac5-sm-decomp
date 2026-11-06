/* LEVEL_23.REL:0x09CD40, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +2.
 * The pinned compiler links 56 bytes but assigns different registers to the 24-byte stride and data base at entry. Reopen with the original record or call-argument type.
 */
extern char D_00284898[];
extern void func_09CDE8(void *, long long, unsigned char, unsigned char, unsigned char);

void func_09CD40(int index, long long value, unsigned char first, unsigned char second, unsigned char third)
{
    func_09CDE8(D_00284898 + index * 0x18, value, first, second, third);
}
