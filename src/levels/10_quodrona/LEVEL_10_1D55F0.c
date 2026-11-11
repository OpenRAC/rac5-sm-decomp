/* LEVEL_10:0x1D55F0 -- placement copy of LEVEL_01_1D1248.c: initializes three linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[3]; unsigned char ready; char pad_139[3]; void *source; } State;
extern State D_003A2028;
extern InputBlock D_00211FA8[];
extern int D_00233A60[];
extern void func_1D5478(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_1D55F0(void *source){ unsigned int i; D_003A2028.source = source;
 for (i = 0; i < 3; i++) func_1D5478(&D_003A2028.records[i], &D_00211FA8[i], D_003A2028.source, D_00233A60, 12);
 D_003A2028.ready = 1; }
