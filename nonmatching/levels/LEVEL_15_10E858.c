/* LEVEL_15.REL:0x10E858: reviewed 140-byte candidate, held for ABI review.
 * Initializes sub-objects of an object, then walks a 0x118-stride table in a
 * fixed range.
 * pinned C with gnu-ee-trial links 140/140 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_10F538 returning void with no arguments, but the accepted
 * LEVEL_15_102BA0.c defines it returning void with (pointer).
 * It declares func_10FA10 returning void with no arguments, but the accepted
 * LEVEL_15_10FA10.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_0015CB10[];
extern char D_0015CB28[];
extern char D_002EFEE0[];
extern char D_001700E0[];
extern void func_10F538();
extern void func_10FA10();
extern void func_0FD820();
extern void func_0FD9C8();
extern void func_11D580();
extern void func_13E970();

void func_10E858(void *a0, char *a1)
{
    char *p;
    char *end;

    func_10F538(a1 + 0x14);
    func_10FA10(a1 + 0x34);
    func_0FD820(a1 + 0x114);
    func_0FD9C8(D_0015CB10);
    p = D_002EFEE0;
    end = p + 0x460;
    do {
        func_11D580(p, D_001700E0);
        p += 0x118;
    } while (p < end);
    func_13E970(D_0015CB28);
}
