/* FRONTEND.REL:0x00EC10: Ghidra body 176 bytes.
 * Pure C with `pinned` links 176 bytes and first differs at +12.
 * Recheck hidden stack arguments and caller-saved register lifetimes. No matching credit.
 */
extern long long func_008AF8(void);
extern int func_008B28(int);
extern void func_00EA70(int, short, short, short, short,
                        int, int, long long, int, int);

void func_00EC10(int object, short first, short second,
                 short third, short fourth, int extra)
{
    long long value = func_008AF8();
    int created = func_008B28(object);
    func_00EA70(object, first, second, third, fourth, 0, 0, value,
                  created, extra);
}
