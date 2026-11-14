/* LEVEL_04:0x1E82D0 -- placement copy of LEVEL_01_1D12E8.c: initializes two linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[2]; unsigned char ready; char pad_D1[3]; void *source; } State;
extern State D_003B4078;
extern InputBlock D_00222918[];
extern int D_00244E48[];
extern void func_1E80B8(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_1E82D0(void *source){ unsigned int i; D_003B4078.source = source;
 for (i = 0; i < 2; i++) func_1E80B8(&D_003B4078.records[i], &D_00222918[i], D_003B4078.source, D_00244E48, 3);
 D_003B4078.ready = 1; }
