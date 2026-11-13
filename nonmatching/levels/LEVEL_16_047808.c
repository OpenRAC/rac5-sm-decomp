/* USA LEVEL_16.REL:0x047808, 140-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 132 linked bytes; first differing word +0x28.
 * Unaccepted; no matching credit. Recover controller-selection source structure; both switch and if helpers merge a repeated default load through a likely branch.
 */
/* Query and update both fixed controller records. */
extern char D_001E4090[];
extern char D_001E7A80[];
extern int func_05D640(char *);
extern void func_05D818(char *);
static inline char *controller(unsigned int index)
{
    if (index==0) return D_001E4090;
    if (index==1) return D_001E7A80;
    return D_001E4090;
}
void func_047808(void)
{
    unsigned int i;
    for (i=0;i<2;++i)
        if (func_05D640(controller(i))) func_05D818(controller(i));
}
