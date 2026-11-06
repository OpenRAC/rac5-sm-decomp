/* LEVEL_01.REL:0x073F78: Ghidra body 68 bytes.
 * Pinned pure C links 68 bytes and first differs at +10.
 * Recheck byte subtraction register allocation and conditional field store. No matching credit.
 */
extern void func_07C670(void *, int);

void func_073F78(char *record, int amount)
{
    int remaining = (unsigned char)record[0x6b] - amount;
    if (remaining < 1) {
        func_07C670(record, 1);
    } else {
        *(unsigned int *)(record + 0x68) =
            remaining * 0x1000000U | 0xffffffU;
    }
}
