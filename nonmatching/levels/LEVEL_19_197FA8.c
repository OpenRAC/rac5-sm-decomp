/* LEVEL_19.REL:0x197FA8, bounded 64-byte retail body.
 * Pinned C links 60 bytes; first difference at body byte +4.
 * The float argument spill and subsequent call setup differ. Reopen with measured callee signatures and argument types.
 */
extern void func_197E20(int *, int *);
extern void func_197C88(int, int, int, unsigned long long);

void func_197FA8(int value)
{
    int output[4];
    int fields[4];
    output[0] = value;
    func_197E20(output, fields);
    func_197C88(fields[0], fields[1], fields[2],
              (unsigned long long)(unsigned int)fields[3] << 30);
}
