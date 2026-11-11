/* LEVEL_06:0x186948 -- selects a status byte from two record fields. */
struct Inner4 {
    char pad0[0x3C];
    int f3C;
    char pad1[0x44 - 0x40];
    int f44;
};

struct Ctl4 {
    char pad0[0xD4];
    unsigned char bD4;
};

struct Obj4 {
    char pad0[0x45];
    unsigned char b45;
    char pad1[0x54 - 0x46];
    struct Inner4 *p54;
    struct Ctl4 *p58;
};

void func_186948(struct Obj4 *a0)
{
    struct Ctl4 *v1;

    v1 = a0->p58;
    if (a0->p54->f3C != 0) {
        v1->bD4 = 7;
        return;
    }
    if (a0->b45 == 4) {
        v1->bD4 = 13;
        return;
    }
    if (a0->p54->f44 != 0) {
        v1->bD4 = 4;
    } else {
        v1->bD4 = 8;
    }
}
