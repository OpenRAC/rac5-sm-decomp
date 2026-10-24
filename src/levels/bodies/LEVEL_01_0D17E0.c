/* LEVEL_01.REL:0x0D17E0 -- arms the flag word at 0x002045DC with 2 and the
   float at 0x002045F0 with 1.0; two symbols on the same page keep the two
   `lui` of the retail. */
extern float D_002045F0;
extern int D_002045DC;

void func_0D17E0(void)
{
    D_002045F0 = 1.0f;
    D_002045DC = 2;
}
