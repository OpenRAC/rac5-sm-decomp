/* LEVEL_04.REL:0x141C68: USA candidate; Ghidra body 92 bytes.
 * Pinned C links 92 bytes, first difference at +30.
 * Recheck the indexed virtual-call types and adjusted object pointer. No matching credit.
 */
extern void func_142100(void);

void func_141C68(char *holder, int index)
{
    char *table;
    char *object;
    char *vtable;
    void (*method)(char *);
    func_142100();
    table = *(char **)(holder + 0x24);
    object = *(char **)(table + index * 4);
    vtable = *(char **)(object + 0x14);
    method = *(void (**)(char *))(vtable + 0x14);
    method(object + *(short *)(vtable + 0x10));
    *(int *)(holder + 0x30) = 1;
}
