/* USA LEVEL_23.REL:0x140010, retained 124-byte C attempt (27 November 2026).
 * Pinned route: 6 differing words, first at +0x2C; no matching credit.
 * The accepted callees consume uint32 at sub+A0 and float at sub+A4; the raw
 * call arguments confirm those addresses. These partial views and the explicit
 * mode branch preserve the measured size but do not fix register scheduling.
 * Reopen with independently justified call/type or branch-layout evidence.
 */
typedef struct {
    char pad0[0xC];
    unsigned char b0C;
} Owner;

typedef struct {
    char pad0[0xA0];
    unsigned int a0;
    float a4;
} Sub;

typedef struct {
    char pad0[0x45];
    unsigned char b45;
    char pad46[0x54 - 0x46];
    Owner *owner;
    Sub *sub;
} Obj;

extern int func_05BA28(unsigned int *p);
extern int func_17E6E8(void *object, float *value, int keep);
extern void func_13EBB8(unsigned char *o, int state, int mode);

void func_140010(Obj *o)
{
    Sub *sub = o->sub;
    Owner *owner = o->owner;

    if (func_05BA28(&sub->a0) != 0 || func_17E6E8(0, &sub->a4, 0) != 0) {
        int mode = 2;
        if (owner->b0C != 0)
            mode = 1;
        func_13EBB8((unsigned char *)o, o->b45, mode);
    }
}
