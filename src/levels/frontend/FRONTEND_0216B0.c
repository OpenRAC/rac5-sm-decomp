/* FRONTEND:0x0216B0 -- clears one 0x824-byte record and resets the selection. */
typedef struct {
    char data[0x818];
    int tail;
    char pad[8];
} Rec;

extern int D_0003284C;
extern Rec D_001EC1E8[];
extern void *memset(void *, int, unsigned int);

int func_0216B0(unsigned int index)
{
    int selected;
    if (index >= 8) {
        return 0;
    }
    memset(&D_001EC1E8[index], 0, sizeof(Rec));
    selected = index == D_0003284C;
    D_001EC1E8[index].tail = 0;
    if (selected) {
        D_0003284C = -1;
    }
    return 1;
}
