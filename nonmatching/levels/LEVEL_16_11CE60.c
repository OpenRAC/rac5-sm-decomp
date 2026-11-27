/* USA LEVEL_16:11CE60, 276-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler r5900-mfc1; options: -fno-gcse.
 * Compiled 276 bytes: 8 differing words; first difference +0x40. No matching credit.
 * Remaining issue: improved 22 -> 8: the slt against a hoisted zero register comes from a lower
 * bound variable lo = 0 set before the loop with -fno-gcse (sibling LEVEL_16:11C6F0 form); left:
 * register numbers of the four hoisted constants (retail 0xCC/1/0x22/0 in t5/t4/t3/t2, ours lo
 * takes t5 because its global-alloc priority (refs 5, live 61) beats the loop movables); lo
 * inside the loop is folded to bgez, named hi/mid limits worse
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_16:0x11CE60 -- advances two fading gauges: while a gauge's timer runs it ramps up or down between two limits with a direction flag, otherwise the shown value decays by eight. */
extern int D_001B8560[2];
extern int D_001B8568[2];
extern unsigned char D_001B8570[2];
extern float D_001B8578[2];
extern float D_001B8580;
extern int D_001B8590[2];

void func_11CE60(void)
{
    unsigned int i;
    int lo;

    lo = 0;
    for (i = 0; i < 2; i++) {
        if (D_001B8590[i] != 0) {
            D_001B8590[i]--;
            if (D_001B8570[i] != 0) {
                D_001B8568[i] += (int)(D_001B8580 / D_001B8578[i] * 8.0f);
                if (D_001B8568[i] > 0xCC) {
                    D_001B8570[i] = 0;
                    D_001B8568[i] = 0xCC;
                }
            } else {
                D_001B8568[i] -= (int)(D_001B8580 / D_001B8578[i] * 8.0f);
                if (D_001B8568[i] < 0x22) {
                    D_001B8570[i] = 1;
                    D_001B8568[i] = 0x22;
                }
            }
            D_001B8560[i] = D_001B8568[i];
        } else {
            D_001B8560[i] -= 8;
            if (D_001B8560[i] < lo) {
                D_001B8560[i] = 0;
            }
        }
    }
}
