/* USA LEVEL_01:108B08, 108-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Byte-exact in an isolated link, but held for a local prototype conflict; no matching credit.
 * Remaining issue: earlier exact draft re-tried; made func_108B08 int and return
 * func_096B20(buf) (still exact) because accepted caller LEVEL_01_164A28 stores its result
 * (07A5A0/1D5D98 declare it void, harmless); func_096948 matches its accepted definition;
 * func_096B20 int as accepted callers use it
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x108B08 -- packs six small fields into one control word, then runs two table routines on a stack buffer. */
extern void func_096948(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
extern int func_096B20(void *a0);

int func_108B08(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
    unsigned int buf[4];
    unsigned int m;
    unsigned int t;

    m = (a0 << 27) | (a1 << 16);
    m = m | (a2 << 15);
    m = m | (a3 << 14);
    t = (a4 << 10) | 0x2000;
    m = m | t;
    m = m | (a5 << 6);
    m = m | 0x21;
    func_096948(buf, m, a6, 0x14, 0, -1, a7);
    return func_096B20(buf);
}
