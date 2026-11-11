/* LEVEL_09:0x12CCF0 -- placement copy of FRONTEND_0216B0.c: clears one 0x824-byte record and resets the selection. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern int D_001F0B84;
extern Rec D_00375D98[];
extern void *memset(void *, int, unsigned int);

int func_12CCF0(unsigned int index)
{
    int selected;
    if (index >= 8) {
        return 0;
    }
    memset(&D_00375D98[index], 0, sizeof(Rec));
    selected = index == D_001F0B84;
    D_00375D98[index].tail = 0;
    if (selected) {
        D_001F0B84 = -1;
    }
    return 1;
}
