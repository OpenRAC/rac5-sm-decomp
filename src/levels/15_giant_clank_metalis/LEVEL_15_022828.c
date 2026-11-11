/* LEVEL_15:0x022828 -- placement copy of LEVEL_01_028C70.c: copies a header record into the object, clears four of its words and runs the setup helper on three of its sub-blocks. */

struct Head028C70 {
    int w00;
    unsigned char b04;
    char pad05[3];
    unsigned char b08;
    char pad09[3];
    unsigned char b0C;
    char pad0D[0x4B];
};

struct Obj028C70 {
    struct Head028C70 head;
    int w58;
    int w5C;
    char pad60[0x24];
    int w84;
    int w88;
    char pad8C[0x64];
    char subs[3][0x44];
};

extern void func_06E000(void *p, int b, int c);

void func_022828(struct Obj028C70 *o, struct Head028C70 *src)
{
    o->head = *src;
    o->w84 = 0;
    o->w58 = 0;
    o->w88 = 0;
    o->w5C = 0;
    func_06E000(o->subs[0], o->head.b04, 1);
    func_06E000(o->subs[2], o->head.b0C, 1);
    func_06E000(o->subs[1], o->head.b08, 1);
}
