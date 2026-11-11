/* LEVEL_01:0x1D1248 -- initializes three linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[3]; unsigned char ready; char pad_139[3]; void *source; } State;
extern State D_00398920;
extern InputBlock D_00209030[];
extern int D_0022A8A0[];
extern void func_1D10D0(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_1D1248(void *source){ unsigned int i; D_00398920.source = source;
 for (i = 0; i < 3; i++) func_1D10D0(&D_00398920.records[i], &D_00209030[i], D_00398920.source, D_0022A8A0, 12);
 D_00398920.ready = 1; }
