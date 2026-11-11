/* LEVEL_01.REL:0x15D3D0 -- fills the record from the global vector and then
   overwrites its second slot with the global float. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
} Vec4;

extern float D_0023541C;

void func_01A2A0(Vec4 *a0);

void func_15D3D0(Vec4 *a0)
{
    func_01A2A0(a0);
    a0->f_04 = D_0023541C;
}
