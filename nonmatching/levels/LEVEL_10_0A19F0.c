/* LEVEL_10.REL:0x0A19F0, bounded 56-byte retail body.
 * Pinned C links 52 bytes; first difference at body byte +8.
 * The pinned compiler links 52 bytes and folds the global base and field offset, changing the saved-register order. Reopen with the original global record layout.
 */
extern int D_002A7CE8;
extern void func_0A19A8(int);

int func_0A19F0(int value)
{
    int old = D_002A7CE8;
    D_002A7CE8 = value;
    func_0A19A8(0);
    return old;
}
