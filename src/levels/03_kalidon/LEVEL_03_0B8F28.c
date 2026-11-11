/* LEVEL_03:0x0B8F28 -- placement copy of LEVEL_01_0B9140.c: runs the shared reset with 3, then marks slot i active and clears its seven per-slot state entries. */
extern unsigned char D_00215058[];
extern unsigned char D_00214E30[];
extern unsigned char D_00215060[];
extern int D_00214EA8[];
extern int D_00214E28[];
extern unsigned char D_003435C8[];
extern int D_00214E38[];
extern void func_0B8F08(void *value);

void func_0B8F28(int i)
{
    func_0B8F08((void *)3);
    D_00214E30[i] = 0;
    D_00215058[i] = 1;
    D_00215060[i] = 0;
    D_00214EA8[i] = 0;
    D_00214E28[i] = 0;
    D_003435C8[i * 0x100] = 0;
    D_00214E38[i] = 0;
}
