/* LEVEL_16.REL:0x112C80: reviewed 104-byte candidate, held for ABI review.
 * Returns one when a probe fails and a scan of a table finds a record whose
 * tag is below five, otherwise zero.
 * pinned C with gnu-ee-trial links 104/104 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_117678 returning pointer with no arguments, but the
 * accepted LEVEL_16_117678.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
int func_025060(int a0, int a1);
char *func_117678(void);

int func_112C80(void)
{
    char *base;
    char *p;
    char *end;

    if (func_025060(0, 0xFF) != 0) {
        return 1;
    }
    base = func_117678();
    if (base != 0) {
        goto scan;
    }
none:
    return 0;
scan:
    p = base + 0xC;
    end = base + 0x78;
    do {
        if (*(unsigned int *)p < 5) {
            goto none;
        }
        p += 0x24;
    } while (p < end);
    return 1;
}
