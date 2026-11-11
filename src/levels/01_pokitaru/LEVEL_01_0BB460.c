/* LEVEL_01:0BB460 -- stores the channel id (masked to a byte) twice and the
   two floats, in the four globals around 0x1FCA25. */
extern unsigned char D_001FCA25;
extern float D_001FCA28;
extern float D_001FCA2C;
extern unsigned char D_001FCA26;

void func_0BB460(unsigned int id, float a, float b)
{
    unsigned char c = id & 0xFF;

    D_001FCA26 = c;
    D_001FCA25 = c;
    D_001FCA28 = b;
    D_001FCA2C = a;
}
