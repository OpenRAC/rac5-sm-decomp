/* LEVEL_03:0x1A1F98 -- on a non-zero random roll sets a status byte in the sub-record, calls a helper and returns 1; otherwise returns 0. */

struct Sub {
    unsigned char pad0[0x9E];
    unsigned char b9E;
};

struct Obj {
    unsigned char pad0[0x54];
    struct Sub *sub;
};

int rand(void);
void func_19FDD0(struct Obj *o, int n);

int func_1A1F98(struct Obj *o)
{
    struct Sub *s;

    s = o->sub;
    if (rand() >> 30) {
        s->b9E = 22;
        func_19FDD0(o, 10);
        return 1;
    }
    return 0;
}
