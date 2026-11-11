/* LEVEL_07:0x1DE198 -- placement copy of LEVEL_01_1D1248.c: initializes three linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[3]; unsigned char ready; char pad_139[3]; void *source; } State;
extern State D_003AE310;
extern InputBlock D_0021DD08[];
extern int D_00240100[];
extern void func_1DE020(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_1DE198(void *source){ unsigned int i; D_003AE310.source = source;
 for (i = 0; i < 3; i++) func_1DE020(&D_003AE310.records[i], &D_0021DD08[i], D_003AE310.source, D_00240100, 12);
 D_003AE310.ready = 1; }
