/* LEVEL_01.REL:0x134070, bounded 184-byte candidate.
 * Isolated pinned C object: 160 bytes; first linked
 * difference at body byte +18. Not linked into the accepted
 * gate or counted.
 * Reopen: GCC materialises the entry pointer instead of keeping the base in $s2, and drops the retail's second `val == 0` test. Reopen with a separate base and an explicit second test.
 */
typedef struct {
    char pad0[0x810];
    unsigned int value;   /* 0x810 */
    unsigned int cur;     /* 0x814 */
    char pad1[4];
    unsigned int flag;    /* 0x81C */
} ENTRY;

extern char D_0038E618[];
extern int func_1343A0(unsigned int a);
extern int func_134368(unsigned int a);
extern unsigned int func_131B40(char *p);

int func_134070(unsigned int idx, unsigned int val)
{
    ENTRY *e;
    unsigned int cap;

    if (idx >= 8)
        return 0;
    if (func_1343A0(idx) == 0)
        return 0;
    if (func_134368(idx) != 0)
        return 0;
    if (val == 0)
        return 0;
    e = (ENTRY *)(D_0038E618 + idx * 0x824);
    if (e->cur == val)
        return 0;
    if (val == 0)
        return 0;
    cap = func_131B40((char *)e);
    if (val > cap)
        return 0;
    e->value = val;
    e->flag = 0;
    return 1;
}
