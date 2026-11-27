/* USA LEVEL_15:127458, 136-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 136 bytes: 19 differing words; first difference +0x0. No matching credit.
 * Remaining issue: loop counter form: three records of 0x7C, right length (136 B); retail
 * eliminates the int counter into slt s0,s3 (s3 = base+0x174) with two separate pointer givs;
 * ours cannot eliminate it (base register not pointer-flagged, giv ncav) and loop.c reverses it
 * into a down-counter (li 2/bgez); with the symbol as giv base the counter is eliminated but the
 * +0x30 giv merges (112 B); key/base register order also differs
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_15:0x127458 -- runs the update pass and the keyed refresh on each of three table records. */
typedef struct {
    char pad_00[0x30];
    char sub_30[0x7C - 0x30];
} Rec;

extern Rec D_0015D414[];
extern int D_001AFEC0;
extern void func_1268E8(void *a0);
extern void func_13D7D8(void *a0, unsigned int a1);

void func_127458(void)
{
    int i;
    unsigned int key = (D_001AFEC0 << 16) | 0xA0001044;
    Rec *r = D_0015D414;

    for (i = 0; i < 3; i++) {
        func_1268E8(&r[i]);
        func_13D7D8(r[i].sub_30, key);
    }
}
