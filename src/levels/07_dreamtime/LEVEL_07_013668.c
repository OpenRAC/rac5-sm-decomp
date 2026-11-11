/* LEVEL_07.REL:0x013668 -- copies the global at 0x00247224 into the one at
   0x0020359C. */
extern float D_00247224;
extern float D_0020359C;

void func_013668(void)
{
    D_0020359C = D_00247224;
}
