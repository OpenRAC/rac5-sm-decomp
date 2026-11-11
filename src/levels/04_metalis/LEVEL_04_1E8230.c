/* LEVEL_04:0x1E8230 -- placement copy of LEVEL_01_1D1248.c: initializes three linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[3]; unsigned char ready; char pad_139[3]; void *source; } State;
extern State D_003B3F38;
extern InputBlock D_00222918[];
extern int D_00244E18[];
extern void func_1E80B8(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_1E8230(void *source){ unsigned int i; D_003B3F38.source = source;
 for (i = 0; i < 3; i++) func_1E80B8(&D_003B3F38.records[i], &D_00222918[i], D_003B3F38.source, D_00244E18, 12);
 D_003B3F38.ready = 1; }
