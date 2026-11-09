/* LEVEL_19:0x115568 -- placement copy of LEVEL_16_114DC0.c: checks a table entry against a field of the object. */

struct Ent114 {
    char pad00[0x40];
    void *f40;
    char pad44[4];
};

extern int func_1135A8(void);
extern struct Ent114 D_002DF808[];

int func_115568(unsigned char *a0, int a1)
{
    int ret;

    ret = 0;
    if (func_1135A8() == 1
        || (func_1135A8() == 0 && *(void **)(a0 + 0xFC) == D_002DF808[a1].f40)
        || (func_1135A8() == 2 && *(void **)(a0 + 0xFC) == D_002DF808[a1].f40)) {
        ret = 1;
    }
    return ret;
}
