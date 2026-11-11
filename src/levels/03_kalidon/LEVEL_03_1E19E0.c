/* LEVEL_03:0x1E19E0 -- placement copy of LEVEL_01_1D1248.c: initializes three linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[3]; unsigned char ready; char pad_139[3]; void *source; } State;
extern State D_003B3A60;
extern InputBlock D_00221EF8[];
extern int D_00245298[];
extern void func_1E1868(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_1E19E0(void *source){ unsigned int i; D_003B3A60.source = source;
 for (i = 0; i < 3; i++) func_1E1868(&D_003B3A60.records[i], &D_00221EF8[i], D_003B3A60.source, D_00245298, 12);
 D_003B3A60.ready = 1; }
