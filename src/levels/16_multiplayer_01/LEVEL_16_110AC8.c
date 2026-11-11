/* LEVEL_16:0x110AC8 -- placement copy of FRONTEND_0216B0.c: clears one 0x824-byte record and resets the selection. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern int D_001B4B94;
extern Rec D_002DC4B8[];
extern void *memset(void *, int, unsigned int);

int func_110AC8(unsigned int index)
{
    int selected;
    if (index >= 8) {
        return 0;
    }
    memset(&D_002DC4B8[index], 0, sizeof(Rec));
    selected = index == D_001B4B94;
    D_002DC4B8[index].tail = 0;
    if (selected) {
        D_001B4B94 = -1;
    }
    return 1;
}
