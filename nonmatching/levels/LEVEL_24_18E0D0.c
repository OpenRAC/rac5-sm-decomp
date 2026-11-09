/* LEVEL_24.REL:0x18E0D0: reviewed 96-byte candidate, held for ABI review.
 * Placement copy of LEVEL_01_1B1DC8.c.
 * pinned C with gnu-ee-trial links 96/96 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_08F748 returning void with (pointer, int, pointer, int,
 * int, int, pointer), but the accepted LEVEL_24_08F748.c defines it returning
 * void with (pointer, int, int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_0018D450[];
extern char D_0018D2C0[];
extern void func_08F748(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_08F920(void *out);

void func_18E0D0(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_08F748(local, mode | 1u, D_0018D450, 60, 0, -1, D_0018D2C0);
    func_08F920(local);
}
