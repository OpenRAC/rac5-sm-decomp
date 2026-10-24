/* LEVEL_03.REL @ 0x0690F0 — 48 octets, swc1 */
typedef struct {
    char padF08[0xF08];
    float fF08;
} C;

void func_03A0C0(C *a0);
float func_001410(void);

void func_0690F0(C *a0)
{
    func_03A0C0(a0);
    a0->fF08 = func_001410();
}
