/* LEVEL_08:0x210D38 -- placement copy of LEVEL_01_1D1248.c: initializes three linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[3]; unsigned char ready; char pad_139[3]; void *source; } State;
extern State D_003EB4B0;
extern InputBlock D_00252B20[];
extern int D_002795B8[];
extern void func_210BC0(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_210D38(void *source){ unsigned int i; D_003EB4B0.source = source;
 for (i = 0; i < 3; i++) func_210BC0(&D_003EB4B0.records[i], &D_00252B20[i], D_003EB4B0.source, D_002795B8, 12);
 D_003EB4B0.ready = 1; }
