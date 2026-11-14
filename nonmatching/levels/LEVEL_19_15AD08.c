/* USA LEVEL_19.REL:0x15AD08 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_15B498 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern void func_15B498(char *object);

void func_15AD08(char *object)
{
    char *state = *(char **)(object + 0x58);
    char *link = *(char **)(state + 0x98);

    if (link != 0 && (*(unsigned int *)(link + 0x64) & 6) != 0) {
        *(int *)(state + 0x98) = 0;
    }
    func_15B498(object);
}
