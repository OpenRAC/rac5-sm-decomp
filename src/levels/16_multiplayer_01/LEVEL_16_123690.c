/* LEVEL_16:0x123690 -- resets via func_07B2E0, then copies two words from a table into the global object. */
typedef struct {
    char pad00[0x28];
    int a;
    char pad2C[0x620 - 0x2C];
    int b;
} Obj;

extern Obj *D_001A1AB8[1];
extern int D_001BC908[];
extern void func_07B2E0(int mode);

void func_123690(void)
{
    func_07B2E0(0);
    D_001A1AB8[0]->a = D_001BC908[0];
    D_001A1AB8[0]->b = D_001BC908[1];
}
