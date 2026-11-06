/* LEVEL_16.REL:0x095168, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +2.
 * The pinned compiler links 56 bytes but assigns different registers to the 24-byte stride and data base at entry. Reopen with the original record or call-argument type.
 */
extern char D_0026AFA8[];
extern void func_095210(void *, long long, unsigned char, unsigned char, unsigned char);

void func_095168(int index, long long value, unsigned char first, unsigned char second, unsigned char third)
{
    func_095210(D_0026AFA8 + index * 0x18, value, first, second, third);
}
