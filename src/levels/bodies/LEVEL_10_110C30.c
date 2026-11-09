/* LEVEL_10:0x110C30 -- placement copy of LEVEL_01_112A18.c: checks a four-byte tag at the argument, then copies a pointer and a word into two globals when the tag and fields match. */

struct Obj {
    char pad_00[4];
    int w_04;
    int w_08;
};

struct Slot {
    char *p_00;
};

extern char D_00220680[];
extern struct Slot D_0020FA04;
extern int D_0020FA00;

extern int memcmp_import(const void *s1, const void *s2, unsigned int n) __asm__("memcmp");

int func_110C30(struct Obj *a0)
{
    if (memcmp_import(a0, D_00220680, 4) != 0) {
        return 0;
    }
    if (a0->w_04 != 3) {
        return 0;
    }
    if (a0->w_08 == 0) {
        return 0;
    }
    D_0020FA04.p_00 = (char *)a0 + 0xC;
    D_0020FA00 = a0->w_08;
    return 1;
}
