/* LEVEL_18:0x18A640 -- placement copy of LEVEL_01_1D12E8.c: initializes two linked records. */
typedef struct { char bytes[0x68]; } OutputBlock;
typedef struct { char bytes[0x44]; } InputBlock;
typedef struct { OutputBlock records[2]; unsigned char ready; char pad_D1[3]; void *source; } State;
extern State D_002E5CF0;
extern InputBlock D_001BFA28[];
extern int D_001D9C20[];
extern void func_18A4D8(OutputBlock *out, InputBlock *input, void *source, const int *choices, int count);

void func_18A640(void *source){ unsigned int i; D_002E5CF0.source = source;
 for (i = 0; i < 2; i++) func_18A4D8(&D_002E5CF0.records[i], &D_001BFA28[i], D_002E5CF0.source, D_001D9C20, 3);
 D_002E5CF0.ready = 1; }
