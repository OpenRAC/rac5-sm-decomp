/* USA FRONTEND.REL:0x023008 (22 November 2026): port of a sister decompilation
 * twin whose bytes compile exactly, not accepted.
 * No inventory interval starts at this offset. No matching credit.
 */
/* FRONTEND:0x023008 -- walks the list of global destructors and calls each one. Ported from rac-sac-decomp src/levels/shared/__do_global_dtors.c (__do_global_dtors). */
typedef void (*dtor_entry)(void);

extern char *D_001054FC;

void func_023008(void)
{
    while (*(dtor_entry *)D_001054FC) {
        D_001054FC = D_001054FC + 4;
        ((dtor_entry)*(dtor_entry *)(D_001054FC - 4))();
    }
}
