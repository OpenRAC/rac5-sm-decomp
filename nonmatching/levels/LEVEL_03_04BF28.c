/* LEVEL_03.REL:0x04BF28: reviewed 96-byte candidate, held for ABI review.
 * Runs two setup helpers on the argument, clears a halfword, then calls three
 * helpers.
 * pinned C with gnu-ee-trial links 96/96 bytes and is byte-exact at this and 6
 * other USA placements, but the prototypes disagree.
 * It declares func_03A300 returning void with (pointer, int), but the accepted
 * LEVEL_03_03A300.c defines it returning void with (long long, long long).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
void func_05A448(void *p);
void func_05A528(void *p);
void func_0238F8(void *o, int v);
void func_03A300(void *o, int v);
void func_023FA0(void);

struct Obj {
    unsigned char pad000[0x102];
    unsigned short h102;
};

void func_04BF28(struct Obj *a0, void *a1)
{
    func_05A448(a1);
    func_05A528(a1);
    a0->h102 = 0;
    func_0238F8(a0, 1);
    func_03A300(a0, 1);
    func_023FA0();
}
