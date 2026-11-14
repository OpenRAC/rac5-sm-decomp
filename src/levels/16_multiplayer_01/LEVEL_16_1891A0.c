/* LEVEL_16:0x1891A0 -- placement copy of LEVEL_01_1D12E8.c: initializes two linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[2]; unsigned char ready; char pad_D1[3]; void *source; } State;
extern State D_002E5D70;
extern InputBlock D_001BE468[];
extern int D_001D98A8[];
extern void func_189038(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_1891A0(void *source){ unsigned int i; D_002E5D70.source = source;
 for (i = 0; i < 2; i++) func_189038(&D_002E5D70.records[i], &D_001BE468[i], D_002E5D70.source, D_001D98A8, 3);
 D_002E5D70.ready = 1; }
