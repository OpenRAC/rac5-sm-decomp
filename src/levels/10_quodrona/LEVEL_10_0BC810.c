/* LEVEL_10.REL:0x0BC810 -- picks between two floats on a byte flag; three
   symbols on the same page keep the three `lui` of the retail. */
extern unsigned char D_00205A24;
extern float D_00205A28;
extern float D_00205A2C;

float func_0BC810(void)
{
    return D_00205A24 ? D_00205A2C : D_00205A28;
}
