/* LEVEL_05:0x10EE58 -- placement copy of LEVEL_01_112A18.c: checks a four-byte tag at the argument, then copies a pointer and a word into two globals when the tag and fields match. */

struct Obj {
    char pad_00[4];
    int w_04;
    int w_08;
};

struct Slot {
    char *p_00;
};

extern char D_00206600[];
extern struct Slot D_001F5E24;
extern int D_001F5E20;

extern int memcmp_import(const void *s1, const void *s2, unsigned int n) __asm__("memcmp");

int func_10EE58(struct Obj *a0)
{
    if (memcmp_import(a0, D_00206600, 4) != 0) {
        return 0;
    }
    if (a0->w_04 != 3) {
        return 0;
    }
    if (a0->w_08 == 0) {
        return 0;
    }
    D_001F5E24.p_00 = (char *)a0 + 0xC;
    D_001F5E20 = a0->w_08;
    return 1;
}
