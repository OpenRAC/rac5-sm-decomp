/* LEVEL_08:0x16EFC0 -- validates the record's offset field, clears two state words, plays the optional jingle and runs the two finishing helpers. */
extern int D_0024FC54;
extern unsigned char D_0023F02C;
extern void func_1AE378(void *first, void *second, void *third);
extern void func_1AE3A8(void);
extern void func_201D70(void);
extern void func_201DB0(void);

struct Rec_16EFC0 {
    int off;
};

struct State_16EFC0 {
    int w_00;
    char pad_04[0x18];
    int w_1C;
};

struct Obj_16EFC0 {
    char pad_00[0x54];
    struct Rec_16EFC0 *rec;
    struct State_16EFC0 *state;
};

int func_16EFC0(struct Obj_16EFC0 *o)
{
    struct Rec_16EFC0 *r = o->rec;
    struct State_16EFC0 *q = o->state;
    int ok;
    int t;

    if (r->off == 0) {
        ok = 0;
    } else {
        t = D_0024FC54 + r->off;
        if (*(int *)(t + 0x40) == 0) {
            r->off = 0;
            ok = 0;
        } else {
            r->off = t;
            ok = 1;
        }
    }
    if (ok == 0) {
        return 0;
    }
    q->w_1C = 0;
    q->w_00 = 0;
    if (D_0023F02C != 0) {
        func_1AE378((void *)0xF, (void *)3, (void *)0x258);
        func_201DB0();
    }
    func_1AE3A8();
    func_201D70();
    return 1;
}
