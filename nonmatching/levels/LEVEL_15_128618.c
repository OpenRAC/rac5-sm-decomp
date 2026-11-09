/* LEVEL_15.REL:0x128618: reviewed 156-byte candidate, held for ABI review.
 * Copies a 24-byte block from the argument into the object, then calls two
 * helpers.
 * pinned C with gnu-ee-trial links 156/156 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_080488 returning void with (pointer, pointer), but the
 * accepted LEVEL_01_09FB18.c defines it returning void with (pointer, int).
 * It declares func_1286D8 returning void with (pointer, int), but the accepted
 * LEVEL_15_1286D8.c defines it returning void with (pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct { unsigned long long v[3]; } __attribute__((packed)) Blk24;

extern void func_080488(char *s, char *tab);
extern void func_1286D8(char *s, int a1);
extern void func_0294D8(char *s, int a1, int a2);
extern char D_00170D40[];

void func_128618(char *s, char *src, int a2, int a3)
{
    func_080488(s, D_00170D40);
    *(Blk24 *)(s + 0xCC) = *(Blk24 *)src;
    func_1286D8(s, a2);
    func_0294D8(s + 0x1C, a3, 0xFFFF);
}
