/* USA LEVEL_01.REL:0x141B80, 188-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 168 linked bytes; first differing word +0xC.
 * Unaccepted; no matching credit. Recover original release-helper ownership and the two slot pointer lifetimes; do not insert a redundant store solely to reproduce the extra retail reset.
 */
/* Reset the owner and release its primary and five auxiliary particle units. */
extern int *D_001F6398;
extern void func_097840(int *);
static inline void release(int **slot)
{
    if (*slot) {
        if (*slot==D_001F6398) D_001F6398=0;
        else func_097840(*slot);
        *slot=0;
    }
}
void func_141B80(unsigned char *object)
{
    unsigned char *data=*(unsigned char **)(object+0x58);
    unsigned int i;
    object[0x45]=1;
    *(unsigned int *)(object+0x70)=0;
    object[0x46]=0;
    release((int **)data);
    for(i=0;i<5;++i) release((int **)(data+0x10+i*4));
}
