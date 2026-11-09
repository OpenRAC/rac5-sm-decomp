/* LEVEL_02:0x160770 -- sets a flag bit in an object word, runs four helpers, then toggles a halfword bit. */

struct Obj160770 {
    char pad_00[0x58];
    char *p_58;
    char pad_5C[0x8];
    int w_64;
};

void func_040EA8(void *value);
void func_040DB0(void *value);
void func_041038(void *value);
void func_041090(void *value);

void func_160770(struct Obj160770 *o, int flag)
{
    char *sub;
    unsigned short *h;

    o->w_64 = (o->w_64 & ~0x1000) | (((flag ^ 1) & 1) << 12);
    sub = o->p_58;
    func_040EA8((void *)flag);
    func_040DB0((void *)flag);
    func_041038((void *)flag);
    func_041090((void *)flag);
    if (flag != 0) {
        h = (unsigned short *)(sub + 0xB4);
        h[6] &= 0xEFFF;
    } else {
        h = (unsigned short *)(sub + 0xB4);
        h[6] |= 0x1000;
    }
}
