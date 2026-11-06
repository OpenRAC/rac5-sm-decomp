/* LEVEL_21.REL:0x137248, bounded 64-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +0.
 * The bounded global counter update differs from the first instruction. Reopen with signedness and global storage type.
 */
extern int D_002F5184;
extern void func_0977D8(int);

void func_137248(int delta)
{
    int next = D_002F5184 + delta;
    D_002F5184 = next < 20 ? next : 20;
    func_0977D8(D_002F5184);
}
