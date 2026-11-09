/* LEVEL_16:0x1157F8 -- when a status word has bit one set and bit two clear, finds the first slot whose entry and entry-field are both set; if the scan runs off the end, sets bit two of the status word. */

struct Entry {
    unsigned char pad0[0xF4];
    int fF4;
};

struct Obj {
    unsigned char pad0[4];
    struct Entry *slot[4];
    unsigned int f14;
};

void func_1157F8(struct Obj *o)
{
    unsigned int f;
    unsigned int i;
    struct Entry *e;

    f = o->f14;
    if ((f & 2) == 0) {
        return;
    }
    if ((f & 4) != 0) {
        return;
    }
    for (i = 0; i < 4; i++) {
        e = o->slot[i];
        if (e != 0 && e->fF4 != 0) {
            break;
        }
    }
    if (i == 4) {
        o->f14 = o->f14 | 4;
    }
}
