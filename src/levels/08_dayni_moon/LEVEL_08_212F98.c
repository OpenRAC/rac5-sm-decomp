/* Candidate for LEVEL_08.REL:0x212F98.
 * Forwards three values with a module context and two local records.
 * The helper's ownership and argument types remain provisional.
 */
extern void *D_00252BFC;
extern unsigned char D_00252C78[];
extern unsigned char D_00252C98[];
extern void func_211180(void *, void *, void *, void *, void *, void *);

void func_212F98(void *first, void *second, void *third)
{
    func_211180(D_00252BFC, first, second,
                D_00252C78, D_00252C98, third);
}
