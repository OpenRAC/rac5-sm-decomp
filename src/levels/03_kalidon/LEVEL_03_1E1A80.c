/* LEVEL_03:0x1E1A80 -- placement copy of LEVEL_01_1D12E8.c: initializes two linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[2]; unsigned char ready; char pad_D1[3]; void *source; } State;
extern State D_003B3BA0;
extern InputBlock D_00221EF8[];
extern int D_002452C8[];
extern void func_1E1868(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_1E1A80(void *source){ unsigned int i; D_003B3BA0.source = source;
 for (i = 0; i < 2; i++) func_1E1868(&D_003B3BA0.records[i], &D_00221EF8[i], D_003B3BA0.source, D_002452C8, 3);
 D_003B3BA0.ready = 1; }
