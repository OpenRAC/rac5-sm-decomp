/* LEVEL_17:0x114550 -- placement copy of LEVEL_16_114DC0.c: checks a table entry against a field of the object. */

struct Ent114 {
    char pad00[0x40];
    void *f40;
    char pad44[4];
};

extern int func_112590(void);
extern struct Ent114 D_002D0988[];

int func_114550(unsigned char *a0, int a1)
{
    int ret;

    ret = 0;
    if (func_112590() == 1
        || (func_112590() == 0 && *(void **)(a0 + 0xFC) == D_002D0988[a1].f40)
        || (func_112590() == 2 && *(void **)(a0 + 0xFC) == D_002D0988[a1].f40)) {
        ret = 1;
    }
    return ret;
}
