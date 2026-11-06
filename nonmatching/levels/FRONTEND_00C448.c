/* FRONTEND.REL:0x00C448: Ghidra body 128 bytes.
 * Pinned pure C links 128 bytes and first differs at +4.
 * Recheck string pointer and register-save lifetimes. No matching credit.
 */
extern int func_01F550(const char *, int *);

int func_00C448(const signed char *text)
{
    int length = 0;
    if (text != 0) {
        signed char current = text[0];
        const signed char *at = text;
        while (current != 0) {
            int extra[4];
            length++;
            if (*at == (signed char)0x95) {
                extra[0] = 0;
                func_01F550((const char *)(text + length), extra);
                length += extra[0];
            }
            at = text + length;
            current = text[length];
        }
    }
    return length;
}
