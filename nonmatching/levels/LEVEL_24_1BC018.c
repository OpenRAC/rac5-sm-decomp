/* LEVEL_24.REL:0x1BC018, bounded 64-byte retail body.
 * Pinned C links 60 bytes; first difference at body byte +4.
 * The float argument spill and subsequent call setup differ. Reopen with measured callee signatures and argument types.
 */
extern void func_1BBE90(int *, int *);
extern void func_1BBCF8(int, int, int, unsigned long long);

void func_1BC018(int value)
{
    int output[4];
    int fields[4];
    output[0] = value;
    func_1BBE90(output, fields);
    func_1BBCF8(fields[0], fields[1], fields[2],
              (unsigned long long)(unsigned int)fields[3] << 30);
}
