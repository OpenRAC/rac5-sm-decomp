/* LEVEL_15.REL:0x0F5EF8: reviewed 108-byte candidate, held for ABI review.
 * Allocates a record through a helper, links it to the argument and a table
 * address, and returns it; a second entry forwards to a flush helper.
 * pinned C with gnu-ee-trial links 108/108 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_0D4FE0 returning pointer with (int, int, pointer, int), but
 * the accepted LEVEL_15_0D4FE0.c defines it returning void with (pointer,
 * pointer, pointer, pointer).
 * It declares func_0F51C8 returning void with no arguments, but the accepted
 * LEVEL_15_0F51C8.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Rec {
    int w_00;
    int w_04;
    char *w_08;
    void *w_0C;
};

extern char D_0016F170[];
extern char D_000F5EB8[];

struct Rec *func_0D4FE0(int a0, int a1, char *a2, int a3);
void func_0F51C8(void);

struct Rec *func_0F5EF8(void *a0)
{
    struct Rec *rec;

    rec = func_0D4FE0(0x10, 0, D_0016F170, 1001);
    rec->w_0C = a0;
    rec->w_08 = D_000F5EB8;
    rec->w_04 = 0;
    return rec;
}

void func_0F5F48(void)
{
    func_0F51C8();
}
