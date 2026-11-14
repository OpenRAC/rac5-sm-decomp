/* USA LEVEL_02.REL:0x160D80, 136-byte candidate (14 November 2026).
 * Measured pinned: 12 differing words; first difference at 0x2C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Obj Obj;

extern void func_160E60(Obj *o, int kind, int flag);
extern void func_0835F8(float a, float b, Obj *s, int c, int d, int e);

struct Obj {
    char pad_00[0x45];
    unsigned char kind;
    unsigned char phase;
};

void func_160D80(Obj *o)
{
    if (o->phase != 2 && o->kind != 4) {
        if ((unsigned int)(o->kind - 2) < 2) {
            func_160E60(o, o->kind, 4);
        } else {
            func_0835F8(0.15000000596046448f, 0.0f, o, 1, 0, 1);
            o->phase = 2;
        }
    }
}
