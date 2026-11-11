/* LEVEL_20:0x0E38B0 -- placement copy of FRONTEND_0216B0.c: clears one 0x824-byte record and resets the selection. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern int D_00117254;
extern Rec D_001FFA18[];
extern void *memset(void *, int, unsigned int);

int func_0E38B0(unsigned int index)
{
    int selected;
    if (index >= 8) {
        return 0;
    }
    memset(&D_001FFA18[index], 0, sizeof(Rec));
    selected = index == D_00117254;
    D_001FFA18[index].tail = 0;
    if (selected) {
        D_00117254 = -1;
    }
    return 1;
}
