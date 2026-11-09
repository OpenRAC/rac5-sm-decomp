/* LEVEL_01.REL:0x0B8F08: reviewed 92-byte candidate, held for ABI review.
 * Placement copy of LEVEL_02_0BF818.c.
 * pinned C with gnu-ee-trial links 92/92 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It defines the function returning void with (int, int, int), but the
 * accepted caller LEVEL_01_0B8F68.c declares it returning void with (int,
 * pointer, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
/* LEVEL_02.REL:0x0BF818: complete reviewed body; pure C. */
extern void func_18D4A0(int value);
extern char *func_1324B0(int id);
extern void func_0B8F90(int index, char *name, int flag, int value);

void func_0B8F08(int index, int previous, int id)
{
    char *name;
    if (previous != 0)
        func_18D4A0(previous);
    name = func_1324B0(id);
    if (name != 0)
        func_0B8F90(index, name, 0, 0x5A);
}
