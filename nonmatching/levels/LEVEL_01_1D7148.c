/* USA LEVEL_01.REL:0x1D7148 (21 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_1D7098 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern int D_00297DC0[];
extern int D_00209298;
extern int D_00209294;
extern int D_0020929C;
extern int D_002092A0;
extern int D_002092A4;
extern char D_00209338[];
extern char D_00209318[];
extern char D_002093D8[];
extern char D_002093F8[];

extern void func_1E1D28(int *out1, unsigned int flags, int *out2, int a, int b);
extern int func_1D7098(unsigned int id, char *a, char *b, void *cb);
extern void func_1D7368(void *head);
extern void func_1DF9B8(void *a);
extern int func_1D1638(unsigned int id, void *a, void *b, int c);
extern int func_0E31C8(unsigned int id);

void func_1D7148(void)
{
    if (D_00209298 == -1) {
        func_1E1D28(&D_00209298, ((unsigned int)D_00297DC0[124] << 16) | 0x580064D9u, &D_00209294,
                    ((unsigned int)D_00297DC0[126] << 16) | 0x580024D9u, 0);
        D_0020929C = func_1D7098(((unsigned int)D_00297DC0[125] << 16) | 0x580064D9u, D_002093D8, D_00209338,
                                 func_1D7368);
        func_1DF9B8(D_002093F8);
        D_002092A0 = func_1D1638(((unsigned int)D_00297DC0[123] << 16) | 0x580034D9u, D_00209318, D_00209338, 0);
        D_002092A4 = func_0E31C8(((unsigned int)D_00297DC0[46] << 16) | 0x580074D9u);
    }
}
