/* LEVEL_06:0x1B0760 -- relocates the item's record: marks a state-2 object with the 0x30 bits, runs func_02DD48 on the record's embedded part, then rebases its stored offsets on the global base pointer, keeping the two pointer fields only when the target's word is set. */
struct Rec {
    unsigned int f0;
    char pad4[0x2C];
    unsigned int f30;
    unsigned int f34;
    unsigned int f38;
    unsigned int f3C;
    unsigned int f40;
};

struct Obj {
    char pad0[0x45];
    unsigned char b45;
    char pad46[0xE];
    struct Rec *f54;
    char pad58[0xC];
    unsigned int f64;
};

extern unsigned char *D_001F5994;
extern void func_02DD48(char *part);

void func_1B0760(struct Obj *o)
{
    struct Rec *r = o->f54;
    unsigned char *p;

    if (o->b45 == 2) {
        o->f64 |= 0x30;
    }
    func_02DD48((char *)r + 4);
    if (r->f38 != 0) {
        r->f38 = (unsigned int)D_001F5994 + r->f38;
    }
    if (r->f34 != 0) {
        r->f34 = (unsigned int)D_001F5994 + r->f34;
    }
    if (r->f40 != 0) {
        r->f40 = (unsigned int)D_001F5994 + r->f40;
    }
    if (r->f3C != 0) {
        r->f3C = (unsigned int)D_001F5994 + r->f3C;
    }
    if (r->f30 != 0) {
        p = D_001F5994 + r->f30;
        if (*(unsigned int *)(p + 0x40) == 0) {
            r->f30 = 0;
        } else {
            r->f30 = (unsigned int)p;
        }
    }
    if (r->f0 != 0) {
        p = D_001F5994 + r->f0;
        if (*(unsigned int *)(p + 0x40) == 0) {
            r->f0 = 0;
        } else {
            r->f0 = (unsigned int)p;
        }
    }
}
