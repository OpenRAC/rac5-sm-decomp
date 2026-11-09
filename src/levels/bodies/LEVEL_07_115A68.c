/* LEVEL_07:0x115A68 -- placement copy of LEVEL_01_112A18.c: checks a four-byte tag at the argument, then copies a pointer and a word into two globals when the tag and fields match. */

struct Obj {
    char pad_00[4];
    int w_04;
    int w_08;
};

struct Slot {
    char *p_00;
};

extern char D_0022C400[];
extern struct Slot D_0021B0A4;
extern int D_0021B0A0;

extern int memcmp_import(const void *s1, const void *s2, unsigned int n) __asm__("memcmp");

int func_115A68(struct Obj *a0)
{
    if (memcmp_import(a0, D_0022C400, 4) != 0) {
        return 0;
    }
    if (a0->w_04 != 3) {
        return 0;
    }
    if (a0->w_08 == 0) {
        return 0;
    }
    D_0021B0A4.p_00 = (char *)a0 + 0xC;
    D_0021B0A0 = a0->w_08;
    return 1;
}
