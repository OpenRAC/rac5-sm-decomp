/* LEVEL_20:0x0E7760 -- placement copy of LEVEL_16_114DC0.c: checks a table entry against a field of the object. */

struct Ent114 {
    char pad00[0x40];
    void *f40;
    char pad44[4];
};

extern int func_0E5970(void);
extern struct Ent114 D_00202BE8[];

int func_0E7760(unsigned char *a0, int a1)
{
    int ret;

    ret = 0;
    if (func_0E5970() == 1
        || (func_0E5970() == 0 && *(void **)(a0 + 0xFC) == D_00202BE8[a1].f40)
        || (func_0E5970() == 2 && *(void **)(a0 + 0xFC) == D_00202BE8[a1].f40)) {
        ret = 1;
    }
    return ret;
}
