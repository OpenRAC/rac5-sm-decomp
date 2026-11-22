/* LEVEL_18:0x122748 -- placement copy of LEVEL_16_123690.c: resets via func_07AC60, then copies two words from a table into the global object. */
typedef struct {
    char pad00[0x28];
    int a;
    char pad2C[0x620 - 0x2C];
    int b;
} Obj;

extern Obj *D_001A2F38[1];
extern int D_001BDD88[];
extern void func_07AC60(int mode);

void func_122748(void)
{
    func_07AC60(0);
    D_001A2F38[0]->a = D_001BDD88[0];
    D_001A2F38[0]->b = D_001BDD88[1];
}
