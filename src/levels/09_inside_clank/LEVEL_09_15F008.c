/* LEVEL_09:0x15F008 -- relocates four offset fields of the attached record by a global base (two of them kept only when their target is valid), then runs the record's finisher. */
typedef struct {
    char pad_00[0x2C];
    int w2C;
    int w30;
    int w34;
    int w38;
} Rec;

typedef struct {
    char pad_00[0x54];
    Rec *rec;
} Obj;

struct Obj02E730 {
    char pad_00[0x10];
    int w_10;
    int w_14;
    int w_18;
};

extern int D_001F0894;
extern void func_02E730(struct Obj02E730 *a0);

void func_15F008(Obj *o)
{
    Rec *rec = o->rec;
    int t;

    if (rec->w2C != 0) {
        t = D_001F0894 + rec->w2C;
        if (*(int *)(t + 0x40) == 0) {
            rec->w2C = 0;
        } else {
            rec->w2C = t;
        }
    }
    if (rec->w30 != 0) {
        t = D_001F0894 + rec->w30;
        if (*(int *)(t + 0x40) == 0) {
            rec->w30 = 0;
        } else {
            rec->w30 = t;
        }
    }
    if (rec->w34 != 0) {
        rec->w34 = D_001F0894 + rec->w34;
    }
    if (rec->w38 != 0) {
        rec->w38 = D_001F0894 + rec->w38;
    }
    func_02E730((struct Obj02E730 *)rec);
}
