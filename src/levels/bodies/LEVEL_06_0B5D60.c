/* LEVEL_06.REL:0x0B5D60 -- writes the flag byte twice and the two float
   arguments into four separate globals on the 0x001E page; one symbol each
   keeps the four `lui` of the retail, and the statement order is one step
   ahead of the retail's store order (the compiler rotates it back). */
extern unsigned char D_001EB925;
extern unsigned char D_001EB926;
extern float D_001EB928;
extern float D_001EB92C;

void func_0B5D60(unsigned char flags, float a, float b)
{
    D_001EB926 = flags;
    D_001EB925 = flags;
    D_001EB928 = b;
    D_001EB92C = a;
}
