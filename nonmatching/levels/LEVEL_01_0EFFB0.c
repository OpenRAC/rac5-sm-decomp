/* LEVEL_01.REL:0x0EFFB0: Ghidra body 148 bytes.
 * Pinned pure C links 132 bytes and first differs at +0.
 * Recheck global-record and helper argument lifetimes against callers. No matching credit.
 */
extern unsigned char D_00331430[];
extern void func_0EEE40(void *, void *);
extern void func_0EFF18(void *, int, void *);

void func_0EFFB0(int index)
{
    unsigned char *state = D_00331430 + index * 0x34;
    if (*state == 0) {
        int *source = (int *)(0x216720 + index * 0x24);
        int value = *source;
        char temporary[16];
        func_0EEE40(temporary, source);
        func_0EFF18(state + 4, value, temporary);
        *state = 1;
    }
}
