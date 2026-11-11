/* LEVEL_02:0x13A108 -- placement copy of FRONTEND_0216B0.c: clears one 0x824-byte record and resets the selection. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern int D_0021C044;
extern Rec D_003A5B18[];
extern void *memset(void *, int, unsigned int);

int func_13A108(unsigned int index)
{
    int selected;
    if (index >= 8) {
        return 0;
    }
    memset(&D_003A5B18[index], 0, sizeof(Rec));
    selected = index == D_0021C044;
    D_003A5B18[index].tail = 0;
    if (selected) {
        D_0021C044 = -1;
    }
    return 1;
}
