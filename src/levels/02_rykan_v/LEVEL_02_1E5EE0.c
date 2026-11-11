/* LEVEL_02:0x1E5EE0 -- placement copy of LEVEL_01_1D1248.c: initializes three linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[3]; unsigned char ready; char pad_139[3]; void *source; } State;
extern State D_003B0878;
extern InputBlock D_0021DF80[];
extern int D_00241D98[];
extern void func_1E5D68(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_1E5EE0(void *source){ unsigned int i; D_003B0878.source = source;
 for (i = 0; i < 3; i++) func_1E5D68(&D_003B0878.records[i], &D_0021DF80[i], D_003B0878.source, D_00241D98, 12);
 D_003B0878.ready = 1; }
