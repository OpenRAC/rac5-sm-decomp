/* LEVEL_01:0x1D12E8 -- initializes two linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[2]; unsigned char ready; char pad_D1[3]; void *source; } State;
extern State D_00398A60;
extern InputBlock D_00209030[];
extern int D_0022A8D0[];
extern void func_1D10D0(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_1D12E8(void *source){ unsigned int i; D_00398A60.source = source;
 for (i = 0; i < 2; i++) func_1D10D0(&D_00398A60.records[i], &D_00209030[i], D_00398A60.source, D_0022A8D0, 3);
 D_00398A60.ready = 1; }
