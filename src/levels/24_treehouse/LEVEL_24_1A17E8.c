/* LEVEL_24:0x1A17E8 -- placement copy of LEVEL_01_1D12E8.c: initializes two linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[2]; unsigned char ready; char pad_D1[3]; void *source; } State;
extern State D_003627B0;
extern InputBlock D_001D9E98[];
extern int D_001F67F8[];
extern void func_1A15D0(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_1A17E8(void *source){ unsigned int i; D_003627B0.source = source;
 for (i = 0; i < 2; i++) func_1A15D0(&D_003627B0.records[i], &D_001D9E98[i], D_003627B0.source, D_001F67F8, 3);
 D_003627B0.ready = 1; }
