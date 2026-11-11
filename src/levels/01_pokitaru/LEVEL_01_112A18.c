/* LEVEL_01:0x112A18 -- checks a four-byte tag at the argument, then copies a pointer and a word into two globals when the tag and fields match. */

struct Obj {
    char pad_00[4];
    int w_04;
    int w_08;
};

struct Slot {
    char *p_00;
};

extern char D_00217700[];
extern struct Slot D_00206DA4;
extern int D_00206DA0;

extern int memcmp_import(const void *s1, const void *s2, unsigned int n) __asm__("memcmp");

int func_112A18(struct Obj *a0)
{
    if (memcmp_import(a0, D_00217700, 4) != 0) {
        return 0;
    }
    if (a0->w_04 != 3) {
        return 0;
    }
    if (a0->w_08 == 0) {
        return 0;
    }
    D_00206DA4.p_00 = (char *)a0 + 0xC;
    D_00206DA0 = a0->w_08;
    return 1;
}
