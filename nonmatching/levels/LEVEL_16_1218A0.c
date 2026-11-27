/* USA LEVEL_16:1218A0, 116-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 116 bytes: 15 differing words; first difference +0x0. No matching credit.
 * Remaining issue: schedule/register order: retail delays the frame addiu after the 0xFFFF store
 * and gives the constants 1/10/5 a0-a2; 1152 store orders x {pinned,sdk991111,gnu-ee-trial} x
 * sched flags searched, best leaves the prologue first and the constants in other registers
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_16:0x1218A0 -- resets the global list record to its defaults and starts the helper on the current context's entry. */
struct Record {
    int a, b, c, d, e, f, g, h;
};

struct Context {
    char pad[372];
    unsigned int index;
};

extern struct Record D_001BC090;
extern struct Context *D_001E00A8;
extern char *D_001A1AB8;
extern void func_121B90(void *);

void func_1218A0(void)
{
    struct Record *r = &D_001BC090;

    D_001BC090.a = 0;
    r->b = 0;
    r->c = 0;
    r->d = 0;
    r->f = 10;
    r->e = 1;
    r->g = 5;
    r->h = 65535;
    func_121B90(D_001A1AB8 + (D_001E00A8->index * 1528 + 4));
}
