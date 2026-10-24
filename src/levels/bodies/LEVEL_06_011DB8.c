/* LEVEL_06.REL:0x011DB8 -- three fixed angles and the global float into
   func_117E50, with the global at 0x21C320 as the first argument. */
extern float D_0021C2E8;
extern char D_0021C320[];

void func_117E50(void *a0, float f0, float f1, float f2);

void func_011DB8(void)
{
    func_117E50(D_0021C320, 62.831853f, 20.0f, D_0021C2E8);
}
