/* LEVEL_18.REL:0x0BFEB0 -- arms the flag word at 0x001B390C with 2 and the
   float at 0x001B3920 with 1.0; two symbols on the same page keep the two
   `lui` of the retail. */
extern float D_001B3920;
extern int D_001B390C;

void func_0BFEB0(void)
{
    D_001B3920 = 1.0f;
    D_001B390C = 2;
}
