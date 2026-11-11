/* LEVEL_04:0x1401D8 -- placement copy of FRONTEND_0216B0.c: clears one 0x824-byte record and resets the selection. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern int D_002204A4;
extern Rec D_003A8E18[];
extern void *memset(void *, int, unsigned int);

int func_1401D8(unsigned int index)
{
    int selected;
    if (index >= 8) {
        return 0;
    }
    memset(&D_003A8E18[index], 0, sizeof(Rec));
    selected = index == D_002204A4;
    D_003A8E18[index].tail = 0;
    if (selected) {
        D_002204A4 = -1;
    }
    return 1;
}
