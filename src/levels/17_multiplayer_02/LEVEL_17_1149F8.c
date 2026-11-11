/* LEVEL_17:0x1149F8 -- placement copy of LEVEL_16_115268.c: claims a free slot in a 28-byte record table for the object, after checking that the object is not already listed. */

typedef struct Obj115268 {
    unsigned char pad_00[0xFC];
    int f_FC;
} Obj115268;

extern unsigned char D_002D0CB8[];
extern unsigned char D_001AB96A;

int func_1149F8(int n, Obj115268 *o) {
    unsigned char *base;
    int *start;
    int *p;
    int *q;
    unsigned int k;

    o->f_FC = n;
    base = D_002D0CB8 + n * 0x1C;
    start = (int *)(base + 4);
    p = start;
    k = 0;
    do {
        if (*p == (int)o) {
            return 0;
        }
        k++;
        p++;
    } while (k < 4);

    q = start;
    k = 0;
    do {
        if (*q == 0) {
            *q = (int)o;
            *(int *)(base + 0x14) = *(int *)(base + 0x14) | 2;
            if (k != 0) {
                D_001AB96A = 1;
            }
            return 1;
        }
        k++;
        q++;
    } while (k < 4);
    return 0;
}
