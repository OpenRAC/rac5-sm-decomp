/* LEVEL_05:0x1BFED8 -- placement copy of LEVEL_01_1D1248.c: initializes three linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[3]; unsigned char ready; char pad_139[3]; void *source; } State;
extern State D_0038FCA0;
extern InputBlock D_001F7FA0[];
extern int D_00216518[];
extern void func_1BFD60(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_1BFED8(void *source){ unsigned int i; D_0038FCA0.source = source;
 for (i = 0; i < 3; i++) func_1BFD60(&D_0038FCA0.records[i], &D_001F7FA0[i], D_0038FCA0.source, D_00216518, 12);
 D_0038FCA0.ready = 1; }
