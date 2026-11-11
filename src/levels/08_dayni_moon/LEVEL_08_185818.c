/* LEVEL_08.REL:185818 -- asks func_01AC70 to fill a stack record, sets its
   float at 0x4 from the global rate, then passes it to func_1851E0 with the
   caller's two arguments. */
typedef struct {
    char pad_00[0x4];
    float f_04;
    char pad_08[0x8];
} Local;

extern float D_002846AC;

extern void func_01AC70(Local *a0);
extern void func_1851E0(void *a0, int a1, Local *a2);

void func_185818(void *a0, int a1)
{
    Local loc;

    func_01AC70(&loc);
    loc.f_04 = D_002846AC;
    func_1851E0(a0, a1, &loc);
}
