/* USA LEVEL_15.REL:0x1359B8, 156-byte candidate (14 November 2026).
 * Measured pinned: 29 differing words; first difference at 0x28.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad_00[0x24];
    int w24;
    int w28;
    int w2C;
    char pad_30[0xC8 - 0x30];
} Entry;

typedef struct {
    int pad_00;
    float a;
    float b;
    float x;
    float y;
    float z;
} Row;

extern char D_0015E030[];
extern Entry D_002F51BC[2];
extern Row D_00171BB8[2];
extern void func_13E970(char *block);
extern void func_0EB068(Entry *e, float a, float b);
extern void func_0ECAB0(int mode, Entry *e, float x, float y, float z);

void func_1359B8(void)
{
    Entry *e;
    Entry *end;
    Row *r;
    float *p;

    func_13E970(D_0015E030);
    e = D_002F51BC;
    r = D_00171BB8;
    end = e + 2;
    p = &r->x;
    do {
        func_0EB068(e, p[-2], p[-1]);
        e->w24 = 0;
        e->w28 = 0;
        e->w2C = 0;
        func_0ECAB0(0, e, p[0], p[1], p[2]);
        e++;
        p += 6;
    } while ((int)e < (int)end);
}
