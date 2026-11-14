/* LEVEL_06:0x1BD2C8 -- placement copy of LEVEL_01_1D12E8.c: initializes two linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[2]; unsigned char ready; char pad_D1[3]; void *source; } State;
extern State D_00385470;
extern InputBlock D_001F7EE8[];
extern int D_00217618[];
extern void func_1BD0B0(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_1BD2C8(void *source){ unsigned int i; D_00385470.source = source;
 for (i = 0; i < 2; i++) func_1BD0B0(&D_00385470.records[i], &D_001F7EE8[i], D_00385470.source, D_00217618, 3);
 D_00385470.ready = 1; }
