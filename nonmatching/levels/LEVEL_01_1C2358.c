/* USA LEVEL_01.REL:0x1C2358, 392-byte candidate (21 November 2026).
 * Measured gnu-ee-trial -mno-check-zero-division: 3 differing words; first
 * difference at 0xE4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct St {
    char pad_00[0x80];
    short timer;
} St;

typedef struct Obj {
    char pad_00[0x45];
    unsigned char state;
    char pad_46[0x12];
    St *st;
} Obj;

extern int rand(void);
extern int func_1C1DF8(Obj *o);
extern void func_1C1E90(Obj *o, int state, int kind);
extern int func_07CE40(Obj *o);
extern int func_07CAB8(void *obj, int a);
extern void func_07CD28(void *obj, int id, int a, int b, float f, float g);

void func_1C2358(Obj *o)
{
    St *s;
    float spread;

    s = o->st;
    s->timer = s->timer - 1;
    if (func_1C1DF8(o) != 0) {
        func_1C1E90(o, o->state, 3);
        return;
    }
    if (func_07CE40(o) == 0xC) {
        if (func_07CAB8(o, 0) != 0) {
            func_07CD28(o, 0xA, 0, 1, 0.15000000596046448f, 0.0f);
            spread = 30.0f;
            s->timer = (float)rand() * 4.656612873077393e-10f * spread + 60.0f;
            return;
        }
    }
    if (s->timer > 0) {
        return;
    }
    switch (rand() % 3) {
    case 0:
        func_07CD28(o, 0xC, 0, 1, 0.15000000596046448f, 0.0f);
        s->timer = 0x7FFF;
        break;
    case 1:
        func_1C1E90(o, o->state, 1);
        break;
    case 2:
        func_1C1E90(o, o->state, 2);
        break;
    }
}
