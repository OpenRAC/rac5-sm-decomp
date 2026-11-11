/* FRONTEND:0x00A928 -- writes the four arguments into the global block. */
extern int D_001230A4[];
extern int D_001230A8[];
extern int D_001230AC[];
extern int D_001230B0[];

void func_00A928(int a, int b, int c, int d)
{
    D_001230A4[0] = a;
    D_001230A8[0] = b;
    D_001230AC[0] = c;
    D_001230B0[0] = d;
}
