/* LEVEL_03.REL:0x178640: reviewed 108-byte candidate, held for ABI review.
 * Packs a field from one block into a helper call, stores the result in a
 * second block, then repeats for a second field.
 * pinned C with gnu-ee-trial links 108/108 bytes and is byte-exact at this and
 * 7 other USA placements, but the prototypes disagree.
 * It declares func_0FB398 returning int with (int), but the accepted
 * LEVEL_03_0FB398.c defines it returning void with (int).
 * It declares func_1FD828 returning int with (int), but the accepted
 * LEVEL_03_1FD828.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
unsigned int func_0FB398(unsigned int a0);
unsigned int func_1FD828(unsigned int a0);

struct Blk {
    unsigned char pad000[0x14C];
    unsigned int w14C;
    unsigned char pad150[0x164 - 0x150];
    unsigned int w164;
};

struct Out {
    unsigned char pad00[0x18];
    unsigned int w18;
    unsigned int w1C;
};

extern struct Blk D_002B2C40;
extern struct Out D_003B0D78;

void func_178640(void)
{
    struct Blk *s0;
    struct Out *s1;
    unsigned int r;

    s0 = &D_002B2C40;
    r = func_0FB398((s0->w14C << 16) | 0x80001045);
    s1 = &D_003B0D78;
    s1->w18 = r;
    r = func_1FD828((s0->w164 << 16) | 0x80001044);
    s1->w1C = r;
}
