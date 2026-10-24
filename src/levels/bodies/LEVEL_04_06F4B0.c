/* LEVEL_04.REL:06F4B0 -- forwards three arguments to func_06F4E0 with a
   zero selector and the float at 0x1F8. */
typedef struct {
    char pad_00[0x1F8];
    float f_1F8;
} Obj;

extern void func_06F4E0(void *a0, void *a1, void *a2, int a3, float a4);

void func_06F4B0(Obj *a0, void *a1, void *a2, void *a3)
{
    func_06F4E0(a1, a2, a3, 0, a0->f_1F8);
}
