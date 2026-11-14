/* LEVEL_17:0x17C7E8 -- placement copy of LEVEL_01_1D12E8.c: initializes two linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[2]; unsigned char ready; char pad_D1[3]; void *source; } State;
extern State D_002D6F60;
extern InputBlock D_001B1940[];
extern int D_001CABB8[];
extern void func_17C680(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_17C7E8(void *source){ unsigned int i; D_002D6F60.source = source;
 for (i = 0; i < 2; i++) func_17C680(&D_002D6F60.records[i], &D_001B1940[i], D_002D6F60.source, D_001CABB8, 3);
 D_002D6F60.ready = 1; }
