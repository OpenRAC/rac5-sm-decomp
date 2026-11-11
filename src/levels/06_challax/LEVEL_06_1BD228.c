/* LEVEL_06:0x1BD228 -- placement copy of LEVEL_01_1D1248.c: initializes three linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[3]; unsigned char ready; char pad_139[3]; void *source; } State;
extern State D_00385330;
extern InputBlock D_001F7EE8[];
extern int D_002175E8[];
extern void func_1BD0B0(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_1BD228(void *source){ unsigned int i; D_00385330.source = source;
 for (i = 0; i < 3; i++) func_1BD0B0(&D_00385330.records[i], &D_001F7EE8[i], D_00385330.source, D_002175E8, 12);
 D_00385330.ready = 1; }
