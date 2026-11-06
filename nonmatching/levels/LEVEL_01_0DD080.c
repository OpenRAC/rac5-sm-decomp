/* LEVEL_01.REL:0x0DD080, bounded 184-byte candidate.
 * Isolated pinned C object: 184 bytes; first linked
 * difference at body byte +112. Not linked into the accepted
 * gate or counted.
 * Reopen: The word composition is reassociated: the chain applies |5 early. Reopen with a form that prevents reassociation without breaking the register allocation.
 */
extern void func_096948(void *, unsigned int, void *, int, int, int, void *);
extern void func_096B20(void *);
extern int D_00297DC0[];
extern char D_000DDE18[];
extern char D_000DE988[];

void func_000DD080(int a, int b, int c, int d)
{
    char buf[16];
    int level;
    int v;
    int flag;
    int notflag;

    flag = (d != 0);
    if (a == 4) {
        v = 9;
    } else {
        level = 3;
        if (a < 3) {
            level = a;
        }
        if (level < 0) {
            level = 0;
        }
        notflag = flag ^ 1;
        v = (notflag ? 0x17 : 0x13) - level;
    }
    func_096948(buf,
                (unsigned int)v << 27 | (unsigned int)D_00297DC0[b] << 16 |
                    ((unsigned int)c << 6 | 0x7000) | 5,
                D_000DDE18, 0x38, 0, -1, D_000DE988);
    func_096B20(buf);
}
