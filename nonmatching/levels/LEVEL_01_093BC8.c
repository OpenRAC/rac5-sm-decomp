/* USA LEVEL_01:093BC8, 276-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Byte-exact in an isolated link; local declarations still conflict with accepted definitions or
 * callers. No matching credit.
 * Remaining issue: port of accepted sibling LEVEL_01_093AB0 (flag/clamp chain, word built in
 * steps with bits = (b << 6) | 0x7000, then | 0x19); the two address arguments named
 * func_092628/func_091928 like the sibling
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_01:0x093BC8 -- builds a packed request word, looks up a slot and returns a cleared entry for it. */
extern void func_096948(void *, unsigned int, void *, int, int, int, void *);
extern int func_096C60(void *);
extern void *func_097738(int handle);
extern void *func_097658(int *out, int handle, int one);
extern void *memset(void *p, int c, unsigned int n);
extern void func_092628(void);
extern void func_091928(void);

void *func_093BC8(int a, int b, unsigned int c, int kind)
{
    char buf[16];
    int level;
    int flag;
    int handle;
    int ok;
    void *rec;
    unsigned int word;
    unsigned int bits;

    flag = (b == 0);
    c &= 0xFFFF;
    if (a == 4) {
        a = 9;
    } else {
        level = 3;
        if (a < 3) {
            level = a;
        }
        if (level < 0) {
            level = 0;
        }
        a = 0x13 - level;
    }
    word = ((unsigned int)a << 27) | (c << 16);
    word |= (unsigned int)flag << 15;
    bits = ((unsigned int)b << 6) | 0x7000;
    word |= bits;
    word |= 0x19;
    func_096948(buf, word, func_092628, 0x70, 1, -1, func_091928);
    handle = func_096C60(buf);
    if (handle == -1) {
        return 0;
    }
    if (kind == 1) {
        rec = func_097738(handle);
        if (rec == 0) {
            return 0;
        }
    } else {
        rec = func_097658(&ok, handle, 1);
        if (ok == 0) {
            return 0;
        }
    }
    memset(rec, 0, 0x70);
    return rec;
}
