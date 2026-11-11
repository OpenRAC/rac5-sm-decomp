/* LEVEL_07.REL:113D80 -- calls the level's writer with the caller's second
   record (or a local one) and the float field of the third argument. */
typedef struct {
    int w_00;
    int w_04;
    int w_08;
} Ctx;

extern Ctx *D_0021B0A8;

extern void func_113DC0(void *a0, void *a1, int a2, void *a3, float f1);

void func_113D80(void *a0, void *a1, void *a2)
{
    char local[16];
    Ctx *ctx = D_0021B0A8;

    func_113DC0(a2 != 0 ? a2 : local, a0, ctx->w_08, a1,
                *(float *)((char *)a1 + 0xC));
}
