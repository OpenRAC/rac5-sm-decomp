/* LEVEL_01.REL:0x026258, bounded 152-byte candidate.
 * Isolated pinned C object: 156 bytes; first linked
 * difference at body byte +64. Not linked into the accepted
 * gate or counted.
 * Reopen: The ternary store is duplicated (156 bytes instead of 152) because GCC does not merge it into a single join block. Reopen with a form that makes the conditional store converge on one sw.
 */
extern char D_001F3EF8[];
extern unsigned char D_001F3ED1;
extern unsigned char D_001F3F58;
extern int D_001F3F74;
extern int D_001F3F8C;
extern char *strcpy(char *dst, const char *src);
extern int func_025438(void *p);

int func_026258(void *p, int flag)
{
    strcpy(D_001F3EF8, p);
    D_001F3F58 = flag;
    if (D_001F3ED1 != 0)
        return 0;
    D_001F3ED1 = 1;
    D_001F3F74 = (flag != 0) ? 0 : func_025438(p);
    D_001F3F8C = 1;
    return 1;
}
