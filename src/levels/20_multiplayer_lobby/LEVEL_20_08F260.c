/* LEVEL_20:0x08F260 -- placement copy of LEVEL_01_0B5C38.c: clears one entry in each of two parallel word tables. */
extern int D_0010CE30[];
extern int D_0010CE38[];

void func_08F260(int index)
{
    D_0010CE30[index] = 0;
    D_0010CE38[index] = 0;
}
