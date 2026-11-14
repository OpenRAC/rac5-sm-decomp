/* LEVEL_01:0x0622C8 -- tells whether the requested id is free: id 0 checks the global counter, otherwise the id must match the second state byte, or match the first with the second byte clear. */
typedef struct S { char pad00[0x158]; unsigned char b158; unsigned char b159; } S;
extern S D_00238F78;
extern unsigned short D_002390D0;
int func_0622C8(int value)
{
    int r;
    if (value == 0) return D_002390D0 == 0;
    r = 0;
    if (D_00238F78.b159 == value || (D_00238F78.b158 == value && D_00238F78.b159 == 0)) r = 1;
    return r;
}
