/* LEVEL_18.REL:0x0A9488 -- writes the flag byte twice and the two float
   arguments into four separate globals on the 0x001A page; one symbol each
   keeps the four `lui` of the retail, and the statement order is one step
   ahead of the retail's store order (the compiler rotates it back). */
extern unsigned char D_001ABF25;
extern unsigned char D_001ABF26;
extern float D_001ABF28;
extern float D_001ABF2C;

void func_0A9488(unsigned char flags, float a, float b)
{
    D_001ABF26 = flags;
    D_001ABF25 = flags;
    D_001ABF28 = b;
    D_001ABF2C = a;
}
