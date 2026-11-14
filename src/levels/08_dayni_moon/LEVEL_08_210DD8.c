/* LEVEL_08:0x210DD8 -- placement copy of LEVEL_01_1D12E8.c: initializes two linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[2]; unsigned char ready; char pad_D1[3]; void *source; } State;
extern State D_003EB5F0;
extern InputBlock D_00252B20[];
extern int D_002795E8[];
extern void func_210BC0(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_210DD8(void *source){ unsigned int i; D_003EB5F0.source = source;
 for (i = 0; i < 2; i++) func_210BC0(&D_003EB5F0.records[i], &D_00252B20[i], D_003EB5F0.source, D_002795E8, 3);
 D_003EB5F0.ready = 1; }
