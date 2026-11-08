/* LEVEL_02.REL:0x0287D8: reviewed 72-byte candidate.
 * pinned C with gnu-ee-trial links 72 bytes; first differs at +24.
 * Retry: Recover the pointer-result assignment and branch flow while preserving the
 * accepted no-argument callee signature.
 * No matching credit.
 */
struct Record {
    unsigned int words[3];
};

extern struct Record D_00208C50[];
extern int func_0293A0(void);

struct Record *func_0287D8(unsigned int index)
{
    unsigned int count = func_0293A0();
    struct Record *selected;
    if (index >= count)
        selected = 0;
    else
        selected = &D_00208C50[index];
    return selected;
}
