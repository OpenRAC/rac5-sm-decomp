/* LEVEL_24:0x1A1748 -- placement copy of LEVEL_01_1D1248.c: initializes three linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[3]; unsigned char ready; char pad_139[3]; void *source; } State;
extern State D_00362670;
extern InputBlock D_001D9E98[];
extern int D_001F67C8[];
extern void func_1A15D0(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_1A1748(void *source){ unsigned int i; D_00362670.source = source;
 for (i = 0; i < 3; i++) func_1A15D0(&D_00362670.records[i], &D_001D9E98[i], D_00362670.source, D_001F67C8, 12);
 D_00362670.ready = 1; }
