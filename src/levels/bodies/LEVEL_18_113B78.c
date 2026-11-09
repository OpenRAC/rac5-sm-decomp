/* LEVEL_18:0x113B78 -- placement copy of LEVEL_16_114DC0.c: checks a table entry against a field of the object. */

struct Ent114 {
    char pad00[0x40];
    void *f40;
    char pad44[4];
};

extern int func_111BB8(void);
extern struct Ent114 D_002DFA08[];

int func_113B78(unsigned char *a0, int a1)
{
    int ret;

    ret = 0;
    if (func_111BB8() == 1
        || (func_111BB8() == 0 && *(void **)(a0 + 0xFC) == D_002DFA08[a1].f40)
        || (func_111BB8() == 2 && *(void **)(a0 + 0xFC) == D_002DFA08[a1].f40)) {
        ret = 1;
    }
    return ret;
}
