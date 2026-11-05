/* FRONTEND.REL:0x024140, bounded 64-byte candidate.
 * Isolated pinned C object: 64 bytes; first linked difference
 * at body byte +12. Not linked into the accepted gate or counted.
 * Reopen: Recover the local float store versus output-pointer setup around the first call.
 */
struct OutWords { unsigned int a, b, c, d; };
void func_023FE0(float *, struct OutWords *);
void func_023FA0(unsigned int, unsigned int, unsigned int, unsigned long long);

void func_024140(float value)
{
    float input = value;
    struct OutWords out;
    func_023FE0(&input, &out);
    func_023FA0(out.a, out.b, out.c, (unsigned long long)out.d << 30);
}
