/* USA LEVEL_23.REL:0x140010, 124-byte candidate (14 November 2026).
 * Measured pinned: 6 differing words; first difference at +0x2C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad0[0xC];
    unsigned char b0C;
} Owner;

typedef struct {
    char pad0[0xA0];
    char a0;
    char pad1[3];
    char a4;
} Sub;

typedef struct {
    char pad0[0x45];
    unsigned char b45;
    char pad46[0x54 - 0x46];
    Owner *owner;
    Sub *sub;
} Obj;

extern int func_05BA28(void *p);
extern int func_17E6E8(int a, void *b, int c);
extern void func_13EBB8(Obj *o, int state, int mode);

void func_140010(Obj *o)
{
    Sub *sub = o->sub;
    Owner *owner = o->owner;

    if (func_05BA28(&sub->a0) != 0 || func_17E6E8(0, &sub->a4, 0) != 0) {
        func_13EBB8(o, o->b45, owner->b0C != 0 ? 1 : 2);
    }
}
