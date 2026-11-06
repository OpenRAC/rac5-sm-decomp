/* LEVEL_07.REL:0x1387E8: USA candidate; Ghidra body 92 bytes.
 * Pinned C links 92 bytes, first difference at +30.
 * Recheck the indexed virtual-call types and adjusted object pointer. No matching credit.
 */
extern void func_138C80(void);

void func_1387E8(char *holder, int index)
{
    char *table;
    char *object;
    char *vtable;
    void (*method)(char *);
    func_138C80();
    table = *(char **)(holder + 0x24);
    object = *(char **)(table + index * 4);
    vtable = *(char **)(object + 0x14);
    method = *(void (**)(char *))(vtable + 0x14);
    method(object + *(short *)(vtable + 0x10));
    *(int *)(holder + 0x30) = 1;
}
