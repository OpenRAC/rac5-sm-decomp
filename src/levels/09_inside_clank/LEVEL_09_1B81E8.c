/* LEVEL_09:0x1B81E8 -- placement copy of LEVEL_01_1D12E8.c: initializes two linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[2]; unsigned char ready; char pad_D1[3]; void *source; } State;
extern State D_00380248;
extern InputBlock D_001F2CB0[];
extern int D_00212040[];
extern void func_1B7FD0(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_1B81E8(void *source){ unsigned int i; D_00380248.source = source;
 for (i = 0; i < 2; i++) func_1B7FD0(&D_00380248.records[i], &D_001F2CB0[i], D_00380248.source, D_00212040, 3);
 D_00380248.ready = 1; }
