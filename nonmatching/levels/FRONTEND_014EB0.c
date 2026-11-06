/* FRONTEND.REL:0x014EB0: Ghidra body 100 bytes.
 * Pinned pure C links 92 bytes and first differs at +16.
 * Recheck frontend result pointer selection and global byte store. No matching credit.
 */
extern unsigned char D_0003028B;
extern char D_0012D770[];
extern char D_0014DF70[];
extern void func_015040(void);

char *func_014EB0(int mode)
{
    if (mode < 2) {
        func_015040();
        D_0003028B = 1;
        if (mode != 0) {
            return D_0014DF70;
        }
        return D_0012D770;
    }
    return 0;
}
