/* LEVEL_01.REL:0x003838: Ghidra body 76 bytes.
 * Pinned pure C links 64 bytes and first differs at +4.
 * Recheck the global pointer and post-call store order. No matching credit.
 */
extern char *D_001EF254;
extern void func_0035D0(void *, void *, void *);

void func_003838(int value, void *first, void *second)
{
    func_0035D0(D_001EF254 + 0xb4, first, second);
    *(int *)(D_001EF254 + 200) = value;
}
