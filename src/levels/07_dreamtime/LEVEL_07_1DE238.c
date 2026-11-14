/* LEVEL_07:0x1DE238 -- placement copy of LEVEL_01_1D12E8.c: initializes two linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[2]; unsigned char ready; char pad_D1[3]; void *source; } State;
extern State D_003AE450;
extern InputBlock D_0021DD08[];
extern int D_00240130[];
extern void func_1DE020(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_1DE238(void *source){ unsigned int i; D_003AE450.source = source;
 for (i = 0; i < 2; i++) func_1DE020(&D_003AE450.records[i], &D_0021DD08[i], D_003AE450.source, D_00240130, 3);
 D_003AE450.ready = 1; }
