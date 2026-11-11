/* LEVEL_15:0x099788 -- placement copy of LEVEL_01_0B9140.c: runs the shared reset with 3, then marks slot i active and clears its seven per-slot state entries. */
extern unsigned char D_00151658[];
extern unsigned char D_00151430[];
extern unsigned char D_00151660[];
extern int D_001514A8[];
extern int D_00151428[];
extern unsigned char D_0023FF88[];
extern int D_00151438[];
extern void func_099768(void *value);

void func_099788(int i)
{
    func_099768((void *)3);
    D_00151430[i] = 0;
    D_00151658[i] = 1;
    D_00151660[i] = 0;
    D_001514A8[i] = 0;
    D_00151428[i] = 0;
    D_0023FF88[i * 0x100] = 0;
    D_00151438[i] = 0;
}
