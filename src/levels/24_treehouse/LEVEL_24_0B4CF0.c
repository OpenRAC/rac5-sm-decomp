/* LEVEL_24.REL:0x0B4CF0 -- writes the flag byte twice and the two float
   arguments into four separate globals on the 0x001C page; one symbol each
   keeps the four `lui`, and the statement order is one step ahead of the
   retail's store order. */
extern unsigned char D_001CD6A5;
extern unsigned char D_001CD6A6;
extern float D_001CD6A8;
extern float D_001CD6AC;

void func_0B4CF0(unsigned char flags, float a, float b)
{
    D_001CD6A6 = flags;
    D_001CD6A5 = flags;
    D_001CD6A8 = b;
    D_001CD6AC = a;
}
