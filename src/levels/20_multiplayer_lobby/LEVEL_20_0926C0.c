/* LEVEL_20:0x0926C0 -- placement copy of LEVEL_01_0B9140.c: runs the shared reset with 3, then marks slot i active and clears its seven per-slot state entries. */
extern unsigned char D_0010D138[];
extern unsigned char D_0010CF10[];
extern unsigned char D_0010D140[];
extern int D_0010CF88[];
extern int D_0010CF08[];
extern unsigned char D_00199EC8[];
extern int D_0010CF18[];
extern void func_0926A0(void *value);

void func_0926C0(int i)
{
    func_0926A0((void *)3);
    D_0010CF10[i] = 0;
    D_0010D138[i] = 1;
    D_0010D140[i] = 0;
    D_0010CF88[i] = 0;
    D_0010CF08[i] = 0;
    D_00199EC8[i * 0x100] = 0;
    D_0010CF18[i] = 0;
}
