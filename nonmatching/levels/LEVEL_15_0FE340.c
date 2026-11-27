/* USA LEVEL_15:0FE340, 256-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 256 bytes: 12 differing words; first difference +0x44. No matching credit.
 * Remaining issue: loop layout: loop 1 now exact (its own counter j and a = &D[j]), loops 3-4
 * exact; loop 2 retail eliminates the counter into a pointer compare (sltu b < end, no preheader
 * test, separate f64 giv) - int counter gets reversed (bgez), unsigned counter kept, pointer
 * for-loop keeps a preheader test, do-while drops the giv; 25 forms measured (18 -> 12 words)
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_15:0x0FE340 -- initialises several fixed tables of records. */
typedef struct {
    int f0;
    char f4[0x64];
} A;
typedef struct {
    char pad0[0x64];
    char f64[0x4C];
} B;
typedef struct {
    char b[0x60];
} D;
typedef struct {
    char b[0x80];
} E;
typedef struct {
    char b[0x154];
} H;
extern A D_0015BAAC[3];
extern B D_0015BBCC[2];
extern D D_002ECDD8[2];
extern E D_0016F840[2];
extern D D_002ECE98[1];
extern H D_0015BD34[1];
extern void func_0CD0B0(void *p);
extern void func_123E20(void *p);
extern void func_1203D8(void *d, void *e);
extern void func_0FC878(void *p);
extern void func_0FCA58(void *d, void *h);

void func_0FE340(void)
{
    unsigned i;
    unsigned j;
    int n;
    A *a;
    B *b;

    for (j = 0; j < 3; j++) {
        a = &D_0015BAAC[j];
        func_0CD0B0(a->f4);
    }
    for (n = 0; n < 2; n++) {
        b = &D_0015BBCC[n];
        func_123E20(b);
        func_0CD0B0(b->f64);
    }
    for (i = 0; i < 2; i++)
        func_1203D8(&D_002ECDD8[i], &D_0016F840[i]);
    for (i = 0; i < 1; i++) {
        func_0FC878(&D_0015BD34[i]);
        func_0FCA58(&D_002ECE98[i], &D_0015BD34[i]);
    }
}
