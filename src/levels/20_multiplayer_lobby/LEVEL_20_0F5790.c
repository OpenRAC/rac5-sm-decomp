/* LEVEL_20:0x0F5790 -- placement copy of LEVEL_16_123690.c: resets via func_068F50, then copies two words from a table into the global object. */
typedef struct {
    char pad00[0x28];
    int a;
    char pad2C[0x620 - 0x2C];
    int b;
} Obj;

extern Obj *D_00104198[1];
extern int D_0011EFA8[];
extern void func_068F50(int mode);

void func_0F5790(void)
{
    func_068F50(0);
    D_00104198[0]->a = D_0011EFA8[0];
    D_00104198[0]->b = D_0011EFA8[1];
}
