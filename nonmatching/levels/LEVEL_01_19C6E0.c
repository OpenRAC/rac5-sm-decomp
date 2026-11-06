/* LEVEL_01.REL:0x19C6E0: Ghidra body 84 bytes.
 * Pinned pure C links 84 bytes and first differs at +36.
 * Recheck branch direction and the result lifetime across the second call. No matching credit.
 */
extern char D_00235140[];
extern int func_19B9C8(void *, void *);
extern void func_19BFF0(void *, void *);

int func_19C6E0(void *record)
{
    if (func_19B9C8(record, D_00235140) == 0)
        return 0;
    func_19BFF0(record, D_00235140);
    return 1;
}
