/* LEVEL_02.REL:0x16AD20, bounded 64-byte retail body.
 * Pinned C links 76 bytes; first difference at body byte +0.
 * The flag update and two-call wrapper emits extra instructions. Reopen with the return and argument types of both callees.
 */
extern long long func_16B2F0(void);
extern void func_1698B8(char *, int, long long);

void func_16AD20(char *record)
{
    *(unsigned int *)(record + 100) |= 8;
    func_1698B8(record, (unsigned char)record[0x45], func_16B2F0());
}
