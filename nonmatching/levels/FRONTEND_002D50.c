/* USA FRONTEND:002D50, 104-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 104 bytes: 3 differing words; first difference +0x4. No matching credit.
 * Remaining issue: register choice: pointer and state locals reloaded each pass fix the loop
 * (9->3 words); only the address-high temp lands in v0 instead of a0 (lui/daddu s0/first lw);
 * ~30 forms and flag sweep
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* FRONTEND:0x002D50 -- waits until a status word reads three, then stores four into it. */

struct Obj {
    char pad_00[0x18];
    int w_18;
};

extern struct Obj *D_0010BE50;

void DelayThread(int a0);

void func_002D50(void)
{
    struct Obj *p;
    int s;

    p = D_0010BE50;
    s = p->w_18;
    if ((s ^ 3) != 0) {
        do {
            DelayThread(0x320);
            p = D_0010BE50;
            s = p->w_18;
        } while (s != 3);
    }
    p = D_0010BE50;
    p->w_18 = 4;
}
