/* LEVEL_15:0x12F548 -- creates three objects and stores their pointers in globals. */
extern int D_0015DF78;
extern int D_0015DF84;
extern void *D_002F3CE8;
extern void *D_002F3CEC;
extern void *D_002F3CF0;
extern void *func_0C21A8(int a0, int a1, int a2, int a3, int t0, int t1);

void func_12F548(void)
{
    D_002F3CE8 = func_0C21A8(0xB, 0x7FE, 0, 0, 0, 1);
    D_002F3CEC = func_0C21A8(0x14, D_0015DF78, 0, 0, 0, 1);
    D_002F3CF0 = func_0C21A8(0x18, D_0015DF84, 0, 0, 0, 3);
}
