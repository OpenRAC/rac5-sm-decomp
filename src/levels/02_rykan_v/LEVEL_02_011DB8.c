/* LEVEL_02.REL:0x011DB8 -- starts the shared sweep with an angle and a
   twenty-unit radius, reading the source factor from its global. */
extern float D_246A68;
extern char D_246AA0[];
extern void func_127B30(char *a0, float a1, float a2, float a3);

void func_011DB8(void)
{
    func_127B30(D_246AA0, 62.831851959228515625f, 20.0f, D_246A68);
}
