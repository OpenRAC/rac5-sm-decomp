/* LEVEL_03:0x1D4230 -- when a key matches the sub-record word, clears two status bits and calls a helper if the mode byte is eight. */

struct Inner {
    unsigned char pad0[0x24];
    int f24;
};

struct Obj {
    unsigned char pad0[0x45];
    unsigned char b45;
    unsigned char pad1[0x58 - 0x46];
    struct Inner *p58;
    unsigned char pad2[0x64 - 0x5C];
    int f64;
};

void func_1D3088(struct Obj *o, int n);

int func_1D4230(struct Obj *o, int key)
{
    int v;

    if (key != o->p58->f24) {
        return 0;
    }
    v = o->f64;
    v = v & -33;
    v = v & -17;
    o->f64 = v;
    if (o->b45 != 8) {
        return 0;
    }
    func_1D3088(o, 9);
    return 1;
}
