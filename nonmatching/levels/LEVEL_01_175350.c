/* LEVEL_01.REL:0x175350: Ghidra body 72 bytes.
 * Pinned pure C links 80 bytes and first differs at +36.
 * Recheck the passed data address and two-call argument widths. No matching credit.
 */
extern char D_002215E0[];
extern void func_09FB18(long long, void *);
extern void func_0340B8(void *, long long, int);

void func_175350(long long record, long long value)
{
    func_09FB18(record, D_002215E0);
    func_0340B8((char *)(int)record + 0x1c, value, 0xffff);
}
