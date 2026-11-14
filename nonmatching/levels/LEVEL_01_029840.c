/* USA LEVEL_01.REL:0x029840 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_029648 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern unsigned int D_001F4338;
extern int D_00231198[];

extern int func_029648(int mode);
extern int func_029B70(char *dst, int size, char *src, int flag);
extern int asyncPs2fioOpen(char *path, char *name, unsigned short mode);

int func_029840(char *a, char *name, int mode, int d)
{
    char path[256];
    int handle;

    func_029648(1);
    func_029B70(path, 0x100, a, d);
    func_029648(1);
    do {
        handle = asyncPs2fioOpen(path, name, mode);
        if (handle >= 0) {
            goto ok;
        }
    } while (func_029648(1) != 0);
    goto done;
ok:
    if (D_001F4338 < 0x80) {
        D_00231198[D_001F4338++] = handle;
    }
done:
    return handle;
}
