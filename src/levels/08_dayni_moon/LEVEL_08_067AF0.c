/* LEVEL_08:0x067AF0 -- placement copy of LEVEL_01_0622C8.c: tells whether the requested id is free: id 0 checks the global counter, otherwise the id must match the second state byte, or match the first with the second byte clear. */
typedef struct S { char pad00[0x158]; unsigned char b158; unsigned char b159; } S;
extern S D_00288208;
extern unsigned short D_00288360;
int func_067AF0(int value)
{
    int r;
    if (value == 0) return D_00288360 == 0;
    r = 0;
    if (D_00288208.b159 == value || (D_00288208.b158 == value && D_00288208.b159 == 0)) r = 1;
    return r;
}
