/* LEVEL_02.REL:0x03BE70: reviewed 92-byte candidate.
 * pinned C with gnu-ee-trial links 88 bytes; first differs at +36.
 * Retry: Recover the separate result-register transfer after the signed 64-bit bit
 * extraction; current useful C links 88/92 bytes.
 * No matching credit.
 */
extern void func_040D18(void);
extern int func_0010C0(int);
extern char D_00003008[];

int func_03BE70(char *record)
{
    long long flags;
    func_040D18();
    flags = *(long long *)(record + 0x968);
    {
    int result = 0;
    if (((int)(flags >> 3) & 1) != 0)
        result = func_0010C0(0) == (int)D_00003008;
    return result;
    }
}
