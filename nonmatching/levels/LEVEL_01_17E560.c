/* LEVEL_01.REL:0x17E560: reviewed 140-byte candidate, held for ABI review.
 * Initializes two linked records from a shared config block and registers a
 * handler.
 * pinned C with gnu-ee-trial links 140/140 bytes and is byte-exact at this and
 * 11 other USA placements, but the prototypes disagree.
 * It declares func_188370 returning int with no arguments, but the accepted
 * LEVEL_01_188370.c defines it returning void with (pointer, long long, int).
 * It declares func_186D68 returning void with no arguments, but the held byte-exact candidate
 * LEVEL_01_186D68.c defines it returning void with (pointer, pointer, pointer,
 * int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Cfg {
    int w0;
    char pad[0x30];
    int f34;
    int f38;
};

extern struct Cfg D_00396AC0;
extern unsigned int D_00297FEC;
extern char D_002081B8[];
extern int func_188370();
extern void func_186D68();
extern void func_17D408();

void func_17E560(char *a0)
{
    char *s2;

    func_188370(a0 + 0xF0, D_00396AC0.w0, 0);
    s2 = a0 + 0x74;
    *(char **)(a0 + 0x104) = s2;
    func_186D68(a0 + 0x118, D_002081B8, (D_00297FEC << 16) | 0xB800408D, D_00396AC0.f34, D_00396AC0.f38);
    *(char **)(a0 + 0x144) = s2;
    func_17D408(a0 + 0x70);
}
