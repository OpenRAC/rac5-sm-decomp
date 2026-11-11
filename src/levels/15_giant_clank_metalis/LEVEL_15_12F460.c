/* LEVEL_15:0x12F460 -- calls five helpers with pairs of table addresses. */

extern char D_0015DE68[];
extern char D_0015CCD0[];
extern char D_0015DE98[];
extern char D_0015CE30[];
extern char D_0015DEC8[];
extern char D_002EFA48[];
extern char D_0015DEF8[];
extern char D_002ED190[];
extern char D_0015DF28[];
extern char D_002ECF18[];
extern char D_0015DF58[];
extern char D_0015C6F8[];

void func_1119C0(int a, void *b);
void func_10E858(void *a, void *b);
void func_1067D0(int a, void *b);
void func_101A00(int a, void *b);
void func_10ABD8(int a, void *b);

void func_12F460(void)
{
    func_1119C0((int)D_0015DE68, D_0015CCD0);
    func_1119C0((int)D_0015DE98, D_0015CE30);
    func_10E858(D_0015DEC8, D_002EFA48);
    func_1067D0((int)D_0015DEF8, D_002ED190);
    func_101A00((int)D_0015DF28, D_002ECF18);
    func_10ABD8((int)D_0015DF58, D_0015C6F8);
}
