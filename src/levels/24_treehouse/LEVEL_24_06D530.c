/* Initializes four cached handles through the module-local creator. */
typedef unsigned int u32;

extern int D_001C6CFC;
extern int D_001C6D00;
extern int D_001C6D04;
extern int D_001C6D08;
extern u32 D_00263CB8;
extern u32 D_00263CAC;
extern u32 D_00263CBC;

extern int func_1019C8(u32 mode);

void func_06D530(void)
{
    if (D_001C6CFC == -1)
        D_001C6CFC = func_1019C8((D_00263CB8 << 16) | 0xB8003045u);
    if (D_001C6D00 == -1)
        D_001C6D00 = func_1019C8((D_00263CB8 << 16) | 0xB00030C5u);
    if (D_001C6D04 == -1)
        D_001C6D04 = func_1019C8((D_00263CAC << 16) | 0xB00030C5u);
    if (D_001C6D08 == -1)
        D_001C6D08 = func_1019C8((D_00263CBC << 16) | 0xB8003045u);
}
