/* LEVEL_01.REL:0x027FF0: Ghidra body 72 bytes.
 * Pinned pure C links 80 bytes and first differs at +24.
 * Recheck indexed table address construction and return width. No matching credit.
 */
extern unsigned long long func_028BD8(void);
extern char D_001F3FD0[];

int func_027FF0(unsigned long long index)
{
    if (index < func_028BD8()) {
        return (int)(D_001F3FD0 + (int)index * 12);
    }
    return 0;
}
