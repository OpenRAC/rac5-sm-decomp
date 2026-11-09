/* LEVEL_06:0x1B9AF0 -- placement copy of LEVEL_01_1CD688.c: walks a global record list, moving a link word out of each record that lacks a flag bit. */
struct Obj3 {
    char pad0[0x6C];
    int w6C;
    char pad1[0x78 - 0x70];
    unsigned char b78;
};

extern int D_0038524C;
void func_1B95C0(struct Obj3 *p);

void func_1B9AF0(void)
{
    struct Obj3 *s0;
    int *link;
    int v;

    link = &D_0038524C;
    s0 = (struct Obj3 *)D_0038524C;
    if (s0 == 0) {
        return;
    }
    do {
        func_1B95C0(s0);
        if ((s0->b78 & 2) != 0) {
            link = &s0->w6C;
        } else {
            v = s0->w6C;
            *link = v;
            s0->w6C = 0;
        }
        s0 = (struct Obj3 *)*link;
    } while (s0 != 0);
}
