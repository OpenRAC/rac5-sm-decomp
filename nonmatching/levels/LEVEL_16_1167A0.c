/* USA LEVEL_16:1167A0, 276-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler ps2eeas; options: -fno-sched-interblock.
 * Compiled 280 bytes: 1 differing words; first difference +0x114. No matching credit.
 * Remaining issue: ps2eeas: 276-byte body exact, object pads to 280 with the zero word retail
 * has at 0x1168B4 (try --size 118 EXACT); -fno-sched-interblock gives the beql/bnel flag-store
 * slots; base pointer char *base = D_002DFB78 then base + 0x4C; func_003480 declared (int,
 * float, float, int), EE-ABI interleaving of accepted (int a0, int a1, float, float)
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_16:0x1167A0 -- per-slot update loop for the two entries of a table. */
typedef struct {
    char pad0[8];
    float v;
    char pad1[0x4C - 0xC];
    unsigned char flag;
    char pad2[3];
    int n;
    char pad3[4];
} Ent;
extern Ent D_002DFB78[2];
extern void func_000BF0(int i);
extern void func_001498(int i);
extern int func_112CE8(int i);
extern int func_05D640(int x);
extern void *func_000D28(int x);
extern void func_116A60(void);
extern void func_116B50(int i);
extern void func_003480(int a0, float f12, float f13, int a1);
extern void func_003740(float a, float b);

typedef struct {
    unsigned char flag;
    char pad[3];
    int n;
    char rest[0x58 - 8];
} Tail;

void func_1167A0(void)
{
    unsigned i;
    Tail *e;
    char *base;
    base = (char *)D_002DFB78;
    e = (Tail *)(base + 0x4C);
    for (i = 0; i < 2; i++, e++) {
        func_000BF0(i);
        func_001498(i);
        if (e->n == 0 && e->flag != 0 && func_05D640(func_112CE8(i)) == 0) {
            if (func_000D28(0) != (void *)func_116A60)
                func_116B50(i);
            func_003480(0x14, 0.4f, 1.0f, 2);
            func_003740(0.7f, 1.0f);
            *(float *)((char *)e - 0x44) = 0.54977876f;
        }
        e->flag = 1;
    }
}
