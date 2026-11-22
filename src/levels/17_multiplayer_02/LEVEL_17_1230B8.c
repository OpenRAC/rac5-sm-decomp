/* LEVEL_17:0x1230B8 -- placement copy of LEVEL_16_123690.c: resets via func_07BD58, then copies two words from a table into the global object. */
typedef struct {
    char pad00[0x28];
    int a;
    char pad2C[0x620 - 0x2C];
    int b;
} Obj;

extern Obj *D_001950B8[1];
extern int D_001AFF00[];
extern void func_07BD58(int mode);

void func_1230B8(void)
{
    func_07BD58(0);
    D_001950B8[0]->a = D_001AFF00[0];
    D_001950B8[0]->b = D_001AFF00[1];
}
