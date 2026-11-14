/* LEVEL_15:0x053558 -- placement copy of LEVEL_01_0622C8.c: tells whether the requested id is free: id 0 checks the global counter, otherwise the id must match the second state byte, or match the first with the second byte clear. */
typedef struct S { char pad00[0x158]; unsigned char b158; unsigned char b159; } S;
extern S D_001810A8;
extern unsigned short D_00181200;
int func_053558(int value)
{
    int r;
    if (value == 0) return D_00181200 == 0;
    r = 0;
    if (D_001810A8.b159 == value || (D_001810A8.b158 == value && D_001810A8.b159 == 0)) r = 1;
    return r;
}
