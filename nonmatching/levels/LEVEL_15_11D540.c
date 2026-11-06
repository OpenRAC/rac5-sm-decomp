/* LEVEL_15.REL:0x11D540, bounded 60-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +4.
 * The pinned compiler links 56 bytes but differs at byte +4 in the extended argument registers. Ghidra did not recover the float and mask arguments. Reopen with a measured callee signature and R5900 argument mapping.
 */
extern char D_0016C5D8[];
extern void func_11D218(float, float, unsigned int, void *);
void func_11D540(void *unused0, void *unused1, void *unused2, void *unused3,
                 char *record)
{
    unsigned int shift = (unsigned char)record[0x14] | 0x10u;
    unsigned int mask = 1u << shift;
    func_11D218(*(float *)(record + 0xc), *(float *)(record + 0x10), mask,
                D_0016C5D8);
}