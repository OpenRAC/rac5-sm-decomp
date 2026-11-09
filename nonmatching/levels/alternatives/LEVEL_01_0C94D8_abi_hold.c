/* LEVEL_01.REL:0x0C94D8: reviewed 196-byte candidate, held for ABI review.
 * Placement copy of LEVEL_02_0CFDE8.c.
 * pinned C with gnu-ee-trial links 196/196 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_1336F8 returning pointer with no arguments, but the
 * accepted LEVEL_01_1336F8.c defines it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern void *func_1336F8(void);
extern void *func_1324B0(int id);
extern char *sprintf(char *buffer, const char *format, ...);
extern void func_0D6F50(int a, void *b, void *c, void *d);
extern void func_0D6F88(int a);

extern int D_00200CE4;
extern char D_0032BEB8[];

void func_0C94D8(void)
{
    void *uVar1;
    void *uVar2;
    void *uVar3;

    if (D_00200CE4 != 0) {
        uVar1 = func_1336F8();
        sprintf(D_0032BEB8, func_1324B0(0x6e6), uVar1);
        uVar1 = func_1324B0(0x30a);
        uVar2 = func_1324B0(0x218);
        func_0D6F50(3, D_0032BEB8, uVar1, uVar2);
        func_0D6F88(10);
    } else {
        uVar1 = func_1324B0(0x214);
        uVar2 = func_1324B0(0x30b);
        uVar3 = func_1324B0(0x218);
        func_0D6F50(3, uVar1, uVar2, uVar3);
    }
}
