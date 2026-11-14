/* LEVEL_22:0x13C8D8 -- placement copy of LEVEL_01_1D12E8.c: initializes two linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[2]; unsigned char ready; char pad_D1[3]; void *source; } State;
extern State D_002E8478;
extern InputBlock D_00166950[];
extern int D_0017C968[];
extern void func_13C6C0(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_13C8D8(void *source){ unsigned int i; D_002E8478.source = source;
 for (i = 0; i < 2; i++) func_13C6C0(&D_002E8478.records[i], &D_00166950[i], D_002E8478.source, D_0017C968, 3);
 D_002E8478.ready = 1; }
