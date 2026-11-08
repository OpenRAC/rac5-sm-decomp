/* LEVEL_01.REL:0x1C7A20: reviewed 172-byte candidate.
 * pinned C with gnu-ee-trial links 160 bytes; first differs at +0.
 * Retry: Recover the pointer and zero-float lifetimes behind the 172-byte frame and
 * register allocation.
 * No matching credit.
 */
extern void func_1C7AD0(void);
extern void func_0DD4F8(float scale, float x, float y, float z, float w,
                         void *object, void *second, void *third,
                         void *entry, void *unused);
extern char D_0022A100;

void func_1C7A20(char *self, void *second) {
    char *object = *(char **)(self + 0x58);
    char *entry;
    unsigned int index = 0;
    float zero;
    func_1C7AD0();
    zero = 0.0f;
    entry = &D_0022A100;
    for (index = 0; index < 6; ++index, entry += 0x10) {
        func_0DD4F8(0.2f, zero, -1.0f, zero, zero,
                    object + 0xE0, second, self, entry, 0);
    }
}
