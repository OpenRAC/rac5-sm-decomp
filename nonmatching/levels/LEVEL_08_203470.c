/* LEVEL_08.REL:0x203470: reviewed 120-byte candidate, held for ABI review.
 * Primes a block with a fixed value, then issues three helper calls on the
 * block and its sub-block.
 * pinned C with gnu-ee-trial links 120/120 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_0AA418 returning void with (pointer, pointer), but the
 * accepted LEVEL_01_09FB18.c defines it returning void with (pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
void func_0AA418(void *a0, void *a1);
void func_038978(void *a0, int a1, unsigned int a2);
void func_038958(void *a0, unsigned int a1, unsigned int a2, int a3);
void func_038940(void *a0);
extern unsigned char D_00278888[];

struct Y {
    unsigned char pad00[4];
    int w04;
};

void func_203470(unsigned char *a0, struct Y *a1)
{
    unsigned char *s2;

    func_0AA418(a0, D_00278888);
    s2 = a0 + 0xCC;
    func_038978(a0 + 0x1C, a1->w04, 0xFFFF);
    func_038958(s2, 0xFFFFFFFF, 0xFFFFFFFF, 0);
    func_038940(s2);
}
