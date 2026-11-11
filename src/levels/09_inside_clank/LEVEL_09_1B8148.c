/* LEVEL_09:0x1B8148 -- placement copy of LEVEL_01_1D1248.c: initializes three linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[3]; unsigned char ready; char pad_139[3]; void *source; } State;
extern State D_00380108;
extern InputBlock D_001F2CB0[];
extern int D_00212010[];
extern void func_1B7FD0(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_1B8148(void *source){ unsigned int i; D_00380108.source = source;
 for (i = 0; i < 3; i++) func_1B7FD0(&D_00380108.records[i], &D_001F2CB0[i], D_00380108.source, D_00212010, 12);
 D_00380108.ready = 1; }
