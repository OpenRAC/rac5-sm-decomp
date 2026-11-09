/* LEVEL_01.REL:0x1105E8: reviewed 128-byte candidate, held for ABI review.
 * Returns 1 if the allocator already ran, else allocates and clears a 16-byte
 * block.
 * pinned C with gnu-ee-trial links 128/128 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_10F7A0 returning pointer with (int, int, pointer, int), but
 * the accepted LEVEL_01_10F7A0.c defines it returning void with (pointer,
 * pointer, pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int func_112A18(void);
extern void *func_10F7A0(int, int, void *, int);
extern void *memset(void *, int, unsigned int);
extern char D_00217698[];
extern void *D_00206DA4;
extern int D_00206DA0;
int func_1105E8(void)
{
    int result = func_112A18();
    if (result == 0) {
        void **slot = &D_00206DA4;
        void *memory = func_10F7A0(0x10, 0xd, D_00217698, 0x78);
        *slot = memory;
        if (memory != 0) {
            memset(memory, 0, 0x10);
            D_00206DA0 = 1;
            result = 1;
        }
    }
    return result;
}
