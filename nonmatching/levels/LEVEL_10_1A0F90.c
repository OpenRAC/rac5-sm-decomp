/* LEVEL_10.REL:0x1A0F90: reviewed 104-byte candidate, held for ABI review.
 * Returns a sub-record address when its flag byte is set, then a routine
 * updates two halves of it.
 * pinned C with gnu-ee-trial links 104/104 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_07D5E8 returning void with (pointer, pointer, int), but the
 * accepted LEVEL_10_07D5E8.c defines it returning float with (pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad_00[0x58];
    char *f_58;
} Obj;

typedef struct {
    char pad_00[0x80];
    unsigned char f_80;
} Rec;

extern void func_07D5E8(char *a0, char *a1, int a2);

char *func_1A0F90(Obj *a0)
{
    char *r;

    r = a0->f_58;
    return ((Rec *)r)->f_80 != 0 ? r + 0x40 : 0;
}

void func_1A0FA8(Obj *a0)
{
    Rec *s1;

    s1 = (Rec *)a0->f_58;
    func_07D5E8((char *)a0, (char *)s1, 0xD);
    func_07D5E8((char *)a0, (char *)s1 + 0x40, 4);
    s1->f_80 = 1;
}
