/* LEVEL_15:0x12AF50 -- stores a clamped scale word from the first argument, chooses a source float from a record by the sign tests, and writes it to a second slot. */

struct Obj {
    char pad_00[0x74];
    float f_74;
    float f_78;
    char pad_7C[0x80 - 0x7C];
    float f_80;
};

struct Thing {
    char pad_00[0x1B8];
    float f_1B8;
    float f_1BC;
};

void func_12AF50(struct Obj *a0, struct Thing **a1, float f12)
{
    struct Thing *t;
    int v;
    float f;

    t = *a1;
    v = 1;
    if (!(0.0f < a0->f_74)) {
        v = 0;
    }
    if (v != 0) {
        a0->f_78 = 1.0f;
    }
    if (f12 <= 0.0f && v != 0) {
        f = t->f_1BC;
    } else {
        f = t->f_1B8;
    }
    a0->f_74 = f12;
    a0->f_80 = f;
}
