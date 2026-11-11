/* LEVEL_04.REL:11C298 -- forwards a value record to func_11C2D8: the
   destination is the optional a2 (a stack buffer when it is null), the
   context comes from the global pointer D_002201C8, and the float is read
   from the value record at 0xC. */
typedef struct {
    char pad_00[0xC];
    float f_0C;
} Val;

typedef struct {
    char pad_00[0x8];
    int f_08;
} Ctx;

extern Ctx *D_002201C8;

extern void func_11C2D8(void *a0, void *a1, int a2, Val *a3, float a4);

void func_11C298(void *a0, Val *a1, void *a2)
{
    char buf[0x10];

    func_11C2D8(a2 ? a2 : buf, a0, D_002201C8->f_08, a1, a1->f_0C);
}
