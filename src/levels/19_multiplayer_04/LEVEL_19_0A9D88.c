/* LEVEL_19.REL:0x0A9D88 -- writes the flag byte twice and the two float
   arguments into four separate globals on the 0x001A page; one symbol each
   keeps the four `lui`, and the statement order is one step ahead of the
   retail's store order (the compiler rotates it back). */
extern unsigned char D_001ABC25;
extern unsigned char D_001ABC26;
extern float D_001ABC28;
extern float D_001ABC2C;

void func_0A9D88(unsigned char flags, float a, float b)
{
    D_001ABC26 = flags;
    D_001ABC25 = flags;
    D_001ABC28 = b;
    D_001ABC2C = a;
}
