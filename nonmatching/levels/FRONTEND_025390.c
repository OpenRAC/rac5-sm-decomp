/* FRONTEND.REL:0x025390: Ghidra body 196 bytes.
 * Pure C with `pinned` links 220 bytes and first differs at +8.
 * Recheck the list-link pointer lifetime through the fallback call. No matching credit.
 */
extern char **func_0242E8(void);
extern char *func_025168(char **);
extern int func_027408(void *);
extern void func_025270(void *);

void func_025390(char *item)
{
    char **link = func_0242E8();
    char *current;
    char *next;
    long long refs = *(long long *)(item + 0x20) - 1;

    *(long long *)(item + 0x20) = refs;
    if (refs != 0) {
        return;
    }

    current = *link;
    if (current == item && *(int *)(item + 0x14) == 0) {
        return;
    }

    if (current != 0) {
        if (current == item) {
            goto found;
        }
        while ((next = *(char **)(current + 0x18)) != 0) {
            link = (char **)(current + 0x18);
            if (next == item) {
                goto found;
            }
            current = *link;
        }
    }

    next = func_025168(link);
    goto unlink;

found:
    next = *(char **)(item + 0x18);
unlink:
    *link = next;
    if (*(void (**)(void *, int))(item + 0x10) != 0) {
        (*(void (**)(void *, int))(item + 0x10))(*(void **)(item + 8), 2);
    }
    if (func_027408(*(void **)(item + 0xc)) == 0) {
        func_025270(*(void **)(item + 0x28));
    }
    func_025270(item);
}
