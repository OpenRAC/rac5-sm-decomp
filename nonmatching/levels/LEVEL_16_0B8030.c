/* LEVEL_16.REL:0x0B8030: reviewed 188-byte candidate, held for ABI review.
 * Formats a status line from two lookups and submits it.
 * pinned C with gnu-ee-trial links 188/188 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_10FC58 returning int with (int), but the accepted
 * LEVEL_16_10FC58.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
int func_110460(void);
int func_110488(void);
int func_10FC58(int a);
char *func_10F330(int a);
int sprintf(char *buf, const char *fmt, ...);
int func_0C6648(int a, char *b, int c, char *d);
int func_0C6680(int a);
extern char D_00279DE8[];

void func_0B8030(void)
{
    unsigned int s1;
    unsigned int t;
    char *s0;

    s1 = func_110460();
    if (s1 == 0xFFFFFFFFu) {
        t = func_110488();
    } else {
        t = s1;
    }
    s1 = t;
    if (func_10FC58(0) == 0) {
        s1 = func_110488();
    }
    s0 = D_00279DE8;
    sprintf(s0, func_10F330(0x6E6), s1);
    s1 = (int)func_10F330(0x30B);
    func_0C6648(3, s0, s1, func_10F330(0x218));
    func_0C6680(10);
}
