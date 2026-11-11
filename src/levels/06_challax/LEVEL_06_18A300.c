/* LEVEL_06:0x18A300 -- placement copy of LEVEL_01_193920.c: scans a 45-entry table for the argument's tag, latches a flag when an early condition holds, and returns the matched entry's float or minus one. */

struct Tag {
    char pad_00[0x24];
    int w_24;
};

struct Obj {
    char pad_00[0x40];
    struct Tag *p_40;
};

extern unsigned char D_001F784C;
extern unsigned char D_001F784D;
extern char D_00212828[];

float func_18A300(struct Obj *a0)
{
    unsigned char t0;
    unsigned int a1;
    char *a2;
    int v;

    t0 = D_001F784C;
    D_001F784D = 0;
    a1 = 0;
    a2 = D_00212828;
    for (;;) {
        v = *(int *)a2;
        if (v == a0->p_40->w_24) {
            if (a1 == 2 && t0 != 0) {
                D_001F784D = 1;
            }
            return *(float *)(a2 + 4);
        }
        a1++;
        a2 += 8;
        if (a1 >= 0x2D) {
            break;
        }
    }
    return -1.0f;
}
