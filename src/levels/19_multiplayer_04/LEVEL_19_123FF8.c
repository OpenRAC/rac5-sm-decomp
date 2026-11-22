/* LEVEL_19:0x123FF8 -- placement copy of LEVEL_16_123690.c: resets via func_07B7C8, then copies two words from a table into the global object. */
typedef struct {
    char pad00[0x28];
    int a;
    char pad2C[0x620 - 0x2C];
    int b;
} Obj;

extern Obj *D_001A2C38[1];
extern int D_001BDA80[];
extern void func_07B7C8(int mode);

void func_123FF8(void)
{
    func_07B7C8(0);
    D_001A2C38[0]->a = D_001BDA80[0];
    D_001A2C38[0]->b = D_001BDA80[1];
}
