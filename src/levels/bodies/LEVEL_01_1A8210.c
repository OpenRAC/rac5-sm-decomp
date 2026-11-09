/* LEVEL_01:0x1A8210 -- looks up a 32-bit key in a record and reports whether it is one of a fixed set. */
struct Q1A8210 {
    char pad0[0x24];
    unsigned int f24;
};

struct P1A8210 {
    char pad0[0x40];
    struct Q1A8210 *f40;
};

int func_1A8210(struct P1A8210 *p)
{
    switch (p->f40->f24) {
    case 0x702BF650u:
    case 0x82396476u:
    case 0xB5E76E00u:
    case 0xB7E306B3u:
    case 0xBF15E7ABu:
        return 1;
    }
    return 0;
}
