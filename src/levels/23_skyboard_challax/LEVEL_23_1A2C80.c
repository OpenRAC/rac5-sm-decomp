/* LEVEL_23:0x1A2C80 -- placement copy of LEVEL_01_1D12E8.c: initializes two linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[2]; unsigned char ready; char pad_D1[3]; void *source; } State;
extern State D_00366860;
extern InputBlock D_001DC2B0[];
extern int D_001F7CD8[];
extern void func_1A2A68(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_1A2C80(void *source){ unsigned int i; D_00366860.source = source;
 for (i = 0; i < 2; i++) func_1A2A68(&D_00366860.records[i], &D_001DC2B0[i], D_00366860.source, D_001F7CD8, 3);
 D_00366860.ready = 1; }
