/* LEVEL_02:0x118D60 -- placement copy of LEVEL_01_112A18.c: checks a four-byte tag at the argument, then copies a pointer and a word into two globals when the tag and fields match. */

struct Obj {
    char pad_00[4];
    int w_04;
    int w_08;
};

struct Slot {
    char *p_00;
};

extern char D_0022C680[];
extern struct Slot D_0021BD64;
extern int D_0021BD60;

extern int memcmp_import(const void *s1, const void *s2, unsigned int n) __asm__("memcmp");

int func_118D60(struct Obj *a0)
{
    if (memcmp_import(a0, D_0022C680, 4) != 0) {
        return 0;
    }
    if (a0->w_04 != 3) {
        return 0;
    }
    if (a0->w_08 == 0) {
        return 0;
    }
    D_0021BD64.p_00 = (char *)a0 + 0xC;
    D_0021BD60 = a0->w_08;
    return 1;
}
