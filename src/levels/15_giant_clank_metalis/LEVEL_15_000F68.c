/* LEVEL_15:000F68 -- stores the incoming float into the global record at
   +0xF8 and forwards it to the level's routine. */
typedef struct {
    char pad[0xF8];
    float f_F8;
} Obj;

extern Obj *D_00143EB0;
extern float func_060E90(float v);
extern void func_000FB0(float v);

void func_000F68(float a0)
{
    D_00143EB0->f_F8 = a0;
    func_000FB0(func_060E90(a0));
}
