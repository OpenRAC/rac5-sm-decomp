/* LEVEL_16:0x114DC0 -- checks a table entry against a field of the object. */

struct Ent114 {
    char pad00[0x40];
    void *f40;
    char pad44[4];
};

extern int func_112E00(void);
extern struct Ent114 D_002DF688[];

int func_114DC0(unsigned char *a0, int a1)
{
    int ret;

    ret = 0;
    if (func_112E00() == 1
        || (func_112E00() == 0 && *(void **)(a0 + 0xFC) == D_002DF688[a1].f40)
        || (func_112E00() == 2 && *(void **)(a0 + 0xFC) == D_002DF688[a1].f40)) {
        ret = 1;
    }
    return ret;
}
