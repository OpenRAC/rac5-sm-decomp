/* LEVEL_10:0x1D5690 -- placement copy of LEVEL_01_1D12E8.c: initializes two linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[2]; unsigned char ready; char pad_D1[3]; void *source; } State;
extern State D_003A2168;
extern InputBlock D_00211FA8[];
extern int D_00233A90[];
extern void func_1D5478(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_1D5690(void *source){ unsigned int i; D_003A2168.source = source;
 for (i = 0; i < 2; i++) func_1D5478(&D_003A2168.records[i], &D_00211FA8[i], D_003A2168.source, D_00233A90, 3);
 D_003A2168.ready = 1; }
