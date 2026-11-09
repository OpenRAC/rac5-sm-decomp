/* LEVEL_22:0x13C838 -- placement copy of LEVEL_01_1D1248.c: initializes three linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[3]; unsigned char ready; char pad_139[3]; void *source; } State;
extern State D_002E8338;
extern InputBlock D_00166950[];
extern int D_0017C938[];
extern void func_13C6C0(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_13C838(void *source){ unsigned int i; D_002E8338.source = source;
 for (i = 0; i < 3; i++) func_13C6C0(&D_002E8338.records[i], &D_00166950[i], D_002E8338.source, D_0017C938, 12);
 D_002E8338.ready = 1; }
