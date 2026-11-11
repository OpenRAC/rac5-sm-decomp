/* LEVEL_23:0x1A2BE0 -- placement copy of LEVEL_01_1D1248.c: initializes three linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[3]; unsigned char ready; char pad_139[3]; void *source; } State;
extern State D_00366720;
extern InputBlock D_001DC2B0[];
extern int D_001F7CA8[];
extern void func_1A2A68(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_1A2BE0(void *source){ unsigned int i; D_00366720.source = source;
 for (i = 0; i < 3; i++) func_1A2A68(&D_00366720.records[i], &D_001DC2B0[i], D_00366720.source, D_001F7CA8, 12);
 D_00366720.ready = 1; }
