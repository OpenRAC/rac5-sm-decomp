/* LEVEL_02:0x1E5F80 -- placement copy of LEVEL_01_1D12E8.c: initializes two linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[2]; unsigned char ready; char pad_D1[3]; void *source; } State;
extern State D_003B09B8;
extern InputBlock D_0021DF80[];
extern int D_00241DC8[];
extern void func_1E5D68(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_1E5F80(void *source){ unsigned int i; D_003B09B8.source = source;
 for (i = 0; i < 2; i++) func_1E5D68(&D_003B09B8.records[i], &D_0021DF80[i], D_003B09B8.source, D_00241DC8, 3);
 D_003B09B8.ready = 1; }
