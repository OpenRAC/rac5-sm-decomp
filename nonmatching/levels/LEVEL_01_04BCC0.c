/* LEVEL_01.REL:0x04BCC0: Ghidra body 84 bytes.
 * Pinned pure C links 60 bytes and first differs at +0.
 * Recheck the callback data address and conditional second call. No matching credit.
 */
extern char D_00235140[];
extern void *func_06AB80(void *);
extern void func_06AD30(void *);

void func_04BCC0(void)
{
    if (func_06AB80(D_00235140) != 0) {
        func_06AD30(D_00235140);
    }
}
