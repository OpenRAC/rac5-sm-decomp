/* LEVEL_15:0x0F2C20 -- placement copy of FRONTEND_0216B0.c: clears one 0x824-byte record and resets the selection. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern int D_0015B9E4;
extern Rec D_002A5998[];
extern void *memset(void *, int, unsigned int);

int func_0F2C20(unsigned int index)
{
    int selected;
    if (index >= 8) {
        return 0;
    }
    memset(&D_002A5998[index], 0, sizeof(Rec));
    selected = index == D_0015B9E4;
    D_002A5998[index].tail = 0;
    if (selected) {
        D_0015B9E4 = -1;
    }
    return 1;
}
