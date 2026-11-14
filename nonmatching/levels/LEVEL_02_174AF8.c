/* USA LEVEL_02.REL:0x174AF8 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement disagrees with an
 * accepted prototype.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern char D_003ACB10[];
extern char D_00236830[];
extern int D_0021C624;
extern int D_0021C628;
extern void func_1DFB40(void *o);
extern void func_0F58F8(int a);
extern int func_130418(unsigned int key);
extern void func_1DFD30(void *o);
extern void func_1E0848(char *block, char *table, void *o);
extern void func_1E0B48(char *block);

void func_174AF8(void *o)
{
    char *block;

    func_1DFB40(o);
    func_0F58F8(7);
    D_0021C624 = func_130418(0xC28DA8E0u);
    D_0021C628 = func_130418(0xFF1208D1u);
    func_1DFD30(o);
    block = D_003ACB10;
    func_1E0848(block, D_00236830, o);
    func_1E0B48(block);
}
