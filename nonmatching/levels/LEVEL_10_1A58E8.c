/* USA LEVEL_10.REL:0x1A58E8, 276-byte candidate (21 November 2026).
 * Measured pinned: 30 differing words; first difference at 0x40.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Tmpl1A58E8 {
    char pad0[0x14];
    float a;
    float b;
    float c;
    float d;
};

struct Rec1A58E8 {
    char pad0[4];
    char slots[10][0x84];
};

struct Obj1A58E8 {
    char pad0[0x30];
    char pos[0x14];
    char pad44;
    unsigned char state;
    char pad46[0x2A];
    float f70;
};

extern char D_003A02C8[];

extern void func_122030(char *a, char *b, float t);
extern void func_108F08(char *slot);
extern void func_0EF270(int id, char *pos);
extern void func_081000(struct Obj1A58E8 *o, struct Tmpl1A58E8 *t, int a, int b, int c, int d, int e, int f,
                        float f0, float f1, float f2, float f3);
extern void func_1A5CF8(struct Obj1A58E8 *o);

void func_1A58E8(struct Obj1A58E8 *o, unsigned char state)
{
    char *rec;
    unsigned int i;
    struct Tmpl1A58E8 *t;

    rec = *(char **)((char *)o + 0x58);
    switch (state) {
    case 1:
        func_122030(rec + 0x52C, rec + 0x56C, *(float *)(rec + 0x584));
        o->f70 = 60.0f;
        break;
    case 2:
        for (i = 0; i < 10; i++) {
            func_108F08(rec + 4 + i * 0x84);
        }
        *(char *)(rec + 0x588) = 0;
        o->f70 = 15.0f;
        func_0EF270(5, o->pos);
        t = *(struct Tmpl1A58E8 **)(D_003A02C8 + 0x38);
        if (t != 0) {
            func_081000(o, t, 0, 0, 0, 0, 0, 1, t->a, t->b, t->c, t->d);
        }
        func_1A5CF8(o);
        break;
    }
    o->state = state;
}
