/* USA FRONTEND.REL:0x0241F8 (22 November 2026): port of a sister decompilation
 * twin whose bytes compile exactly, not accepted.
 * The inventory interval here is empty; the 16-byte body needs a boundary
 * review. No matching credit.
 */
/* FRONTEND:0x0241F8 -- default action when exception handling fails: stops the program. Ported from rac2-decomp src/core/00120354.c (default_terminate). */
extern void abort(void) __attribute__((noreturn));

void func_0241F8(void) {
    abort();
}
