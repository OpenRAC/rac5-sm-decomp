/* LEVEL_08:0x145290 -- placement copy of FRONTEND_0216B0.c: clears one 0x824-byte record and resets the selection. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern int D_0024FF44;
extern Rec D_003DD898[];
extern void *memset(void *, int, unsigned int);

int func_145290(unsigned int index)
{
    int selected;
    if (index >= 8) {
        return 0;
    }
    memset(&D_003DD898[index], 0, sizeof(Rec));
    selected = index == D_0024FF44;
    D_003DD898[index].tail = 0;
    if (selected) {
        D_0024FF44 = -1;
    }
    return 1;
}
