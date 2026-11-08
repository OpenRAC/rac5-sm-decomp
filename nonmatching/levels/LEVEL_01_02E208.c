/* LEVEL_01.REL:0x02E208: reviewed 112-byte candidate.
 * pinned C with gnu-ee-trial links 112 bytes; first differs at +1.
 * Retry: Recover a source form that keeps the first shifted argument as the
 * accumulator register without an artificial register binding.
 * No matching credit.
 */
extern char D_0002D1C8[];
extern void func_096948(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, int third);
extern void func_096B20(void *out);

void func_02E208(unsigned int first, unsigned int second, unsigned int third,
                 unsigned int fourth, unsigned int fifth, unsigned int sixth) {
    char local[16];
    unsigned int mode = first << 27;
    mode |= second << 16;
    mode |= third << 15;
    mode |= fourth << 14;
    mode |= (fifth << 10) | 0x3000u;
    mode |= sixth << 6;
    func_096948(local, mode | 5u, D_0002D1C8, 0x38, 0, -1, 0);
    func_096B20(local);
}
