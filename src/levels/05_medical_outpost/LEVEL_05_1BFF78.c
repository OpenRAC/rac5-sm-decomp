/* LEVEL_05:0x1BFF78 -- placement copy of LEVEL_01_1D12E8.c: initializes two linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[2]; unsigned char ready; char pad_D1[3]; void *source; } State;
extern State D_0038FDE0;
extern InputBlock D_001F7FA0[];
extern int D_00216548[];
extern void func_1BFD60(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_1BFF78(void *source){ unsigned int i; D_0038FDE0.source = source;
 for (i = 0; i < 2; i++) func_1BFD60(&D_0038FDE0.records[i], &D_001F7FA0[i], D_0038FDE0.source, D_00216548, 3);
 D_0038FDE0.ready = 1; }
